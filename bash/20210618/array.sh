#!/bin/bash
declare -A array
for ((i=0; i<5; i++)) do
        for ((j=0; j<5; j++)) do
                array[$i,$j]=$RANDOM
                printf "%d\t" "${array[$i,$j]}"
        done
        printf "\n"
done
