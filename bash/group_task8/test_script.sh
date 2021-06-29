#!/bin/bash
gcc task12.c -o rez

check_exit_status(){
if [ "$READ" -eq "0" ]
then
        echo "Passed"
elif [ "$READ" -eq "1" ]
then
       	echo "Error: not allocated memory for employee name!"
       	printf "\n"
elif [ "$READ" -eq "2" ]
then
	echo "Error: not allocated memory for employee middle name!"
	printf "\n"
elif [ "$READ" -eq "3" ]
then
        echo "Error: not allocated memory for employee last name!"
        printf "\n"
elif [ "$READ" -eq "4" ]
then
        echo "Error: not allocated memory for employee position!"
        printf "\n"

else
	echo "Unknown error"
	printf "\n"
fi
}
./rez 
READ=$?
check_exit_status READ
exit 0
