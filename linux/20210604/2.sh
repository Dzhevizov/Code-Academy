#!/bin/bash
for i in "$@"
do
        if [ ! -e "$i" ]
        then
                echo "File does not exist"
                read FILENAME
                touch $FILENAME
        else
                echo $i
        fi
done
