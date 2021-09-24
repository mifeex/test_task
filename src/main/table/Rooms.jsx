import React from 'react';
import Lines from './Lines'
import s from "./style.module.css"

const Rooms = props => {
    return (
        <>
            <h2>{props.title}</h2>
            <table className={s.table}>
                <thead>
                    <tr>
                        <th className={s.tableTH}>Время</th>
                        <th className={s.tableTH}>Название выступления</th>
                        <th className={s.tableTH}>Спикер</th>
                    </tr>
                </thead>
                <tbody>
                    
                    { props.lines.map(line => {
                        return <Lines name={line.name} 
                        startTime={line.startTime}
                        endTime={line.endTime}
                        speakers={line.speakers}
                        key={line.id}
                    />
                     })}  
                </tbody>
            </table>
        </>
    )
};

export default Rooms