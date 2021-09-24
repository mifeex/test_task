import React from 'react';
import Rooms from './table/Rooms';
import * as axios from 'axios';

const Table = props => {
    const [rooms, addNewRoom] = React.useState([]);
    const [lines, addNewLine] = React.useState({});

    React.useEffect(() => {
        axios.get("https://dev.powerplace.online/api/v1/test/agenda")
        .then(data => {
            addNewLine(data.data)
        })
        .then(() => {
            axios.get("https://dev.powerplace.online/api/v1/test/areas")
            .then(data => {
                addNewRoom(data.data)
            })
        })
    }, []);

    console.log(lines)
    return (
        <>
            {rooms.map(e => {
                return <Rooms rooms={e.id}
                            title={e.title}
                            enabled={e.enabled}
                            lines={lines[e.id]} 
                            key={e.id}
                        />
            })}
        </>
    )
};

export default Table