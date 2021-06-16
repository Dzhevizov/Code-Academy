#!/bin/bash
while read DIR
do
        echo $DIR
for file in `ls ${DIR}/*.FIN`
do
        name=`echo $file | cut -f 1 -d'.'`
        echo $name
        mv "${name}.DAT" "${name%}.SUCCESS"
        rm $file
        done
done
