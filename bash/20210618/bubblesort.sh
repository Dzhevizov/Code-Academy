#!/bin/bash
data=(raspberry apple grapefruit melon watermelon grape wine)
len=${#data[@]}
for i in `seq 0 $len`
do
        for ((j=len; j>i; j--))
        do
                if [[ ${data[j-1]}>${data[j]} ]]
                then
                        temp=${data[j]}
                        data[$j]=${data[$((j-1))]}
                        data[$((j-1))]=$temp
                fi
        done
done

echo ${data[*]}
