#!/bin/bash
check_exit_status () {
	if [ "$READ" -ne "0" ]
	then
		if [ "$READ" -eq "1" ]
      	then	
        	echo "Error reading input file"
		elif [ "$READ" -eq "2" ]
		then
			echo "Error opening output file"
		elif [ "$READ" -eq "3" ]
		then
			echo "Error closing input file"
		elif [ "$READ" -eq "4" ]
		then
			echo "Error closing output file"

        else
        	echo "Unknown Error"
        fi
	else
        echo "Passed"
	fi
}
INPUT=$1
OUTPUT=$2
gcc task11.c -o rez
./rez $INPUT $OUTPUT
READ=$?
echo $INPUT $OUTPUT
check_exit_status READ
