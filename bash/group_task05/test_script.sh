#!/bin/bash
gcc task1_2.c -o rez
source test_data
check_exit_status(){
if [ "$READ" -eq "0" ]
then
        echo "Passed"
elif [ "$READ" -eq "1" ]
then
       	echo "Incorrect count of arguments"
elif [ "$READ" -eq "2" ]
then
	echo "Invalid operation"
elif [ "$READ" -eq "3" ]
then
        echo "Invalid operator"
elif [ "$READ" -eq "4" ]
then
        echo "Incorrect result"

else
	echo "Unknown error"
fi
}
./rez $a1 $o1 $b1 $c1
READ=$?
check_exit_status READ
./rez $a2 $o2 $b2 $c2
READ=$?
check_exit_status READ
./rez $a3 $o3 $b3 $c3
READ=$?
check_exit_status READ
./rez $a4 $o4 $b4 $c4
READ=$?
check_exit_status READ
./rez $a5 $o5 $b5 $c5
READ=$?
check_exit_status READ
./rez $a6 $o6 $b6 $c6
READ=$?
check_exit_status READ
./rez $a7 $o7 $b7 $c7
READ=$?
check_exit_status READ
./rez $a8 $o8 $b8 $c8
READ=$?
check_exit_status READ
exit 0
