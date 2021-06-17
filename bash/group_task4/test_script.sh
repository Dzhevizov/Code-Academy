#!/bin/bash
gcc task7.c -o rez
source test_data
check_exit_status(){
if [ "$READ" -eq "0" ]
then
        echo "Passed"
elif [ "$READ" -eq "1" ]
then
       	echo "Memory is not allocated"
elif [ "$READ" -eq "2" ]
then
	echo "Allocated memory is not set to 0"
else
	echo "Unknown error"
fi
}
./rez $test1
READ=$?
check_exit_status READ
./rez $test2 
READ=$?
check_exit_status READ
./rez $test3
READ=$?
check_exit_status READ
./rez $test4
READ=$?
check_exit_status READ
exit 0
