#!/bin/bash
gcc task12.c -o rez

check_exit_status(){
if [ "$READ" -eq "0" ]
then
        echo "Passed"
elif [ "$READ" -eq "1" ]
then
       	echo "Error: not a valid first number!"
       	printf "\n"
elif [ "$READ" -eq "2" ]
then
	echo "Error: not a valid first character!"
	printf "\n"
elif [ "$READ" -eq "3" ]
then
        echo "Error: not a valid second number!"
        printf "\n"
elif [ "$READ" -eq "4" ]
then
        echo "Error: not a valid second character!"
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
