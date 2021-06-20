#!/bin/bash
students=(Micho Pesho 'Jenifer Lopes' "Doctor Kostov")
course=(1 2 3 4 2 3)
i=0
for student in ${students[*]}
do
        echo "$student ${course[$(($i))]}"
        i=$(($i+1))
done
