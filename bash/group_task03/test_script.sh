#!/bin/bash
gcc task7.c -o rez
source test_data
check_exit_status(){
if [ "$READ" -eq "0" ]
then
        echo "Passed"
elif [ "$READ" -eq "1" ]
then
       	echo "Invalid day"
elif [ "$READ" -eq "2" ]
then
	echo "Invalid month"
else
	echo "Unknown error"
fi
}
./rez $year1 $month1 $day1
READ=$?
check_exit_status READ
./rez $year2 $month2 $day2 
READ=$?
check_exit_status READ
./rez $year3 $month3 $day3
READ=$?
check_exit_status READ
./rez $year4 $month4 $day4
READ=$?
check_exit_status READ
exit 0
