import React from 'react';
import s from "./style.module.css"

let date = ""

class DateHandler {
    constructor(curDate) {
        this.date = new Date(curDate);
        this.month = this.date.getMonth()+1;
        this.year = this.date.getFullYear();
        this.hours = this.date.getHours();
        this.min = this.date.getMinutes();
        this.dt = this.date.getDate();

        if (this.dt < 10) {
            this.dt = '0' + this.dt;
        }
        if (this.min < 10) {
            this.min = '0' + this.min;
        }
        if(this.month < 10){
            this.month = '0' + this.month;
        }
    }
    getYear() {
        return `${this.dt}.${this.month}.${this.year}`;
    }
    getTime() {
        return `${this.hours}:${this.min}`
    }
}

const Lines = props => {
    let startDate = new DateHandler(props.startTime)
    let endDate = new DateHandler(props.endTime)
    let [currentDate, changeDate] = React.useState("")
    
    React.useEffect(() => {
        const dateValidator = () => {
            if(date !== startDate.getYear()) {
                console.log(date)
                date = startDate.getYear()
                changeDate(startDate.getYear())
            }
            else{ changeDate("") }
        }

        dateValidator()
    }, [props.startTime])
    return (
        <>
            <h3 className={currentDate === "" ? s.no : s.d6}>{currentDate}</h3>
            <tr>
                <td className={s.tableTD}>
                    {startDate.getTime()} - 
                    {endDate.getTime()}
                </td>
                <td className={s.tableTD}>{props.name}</td>
                {props.speakers.map(e => {
                    console.log(e)
                    return <td className={s.tableTD}>
                                {e.name} ({e.desc})
                            </td>
                })}
            </tr>
        </>
    )
};

export default Lines