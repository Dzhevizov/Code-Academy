#!/bin/bash
PREFIX=194.145.63
for OCTET in `seq 1 255`; do
    echo -en "Pinging ${PREFIX}.${OCTET}...."
    ping -c1 -w1 ${PREFIX}.${OCTET} > /dev/null 2>&1
    if [ "$?" -eq "0" ]; then
        echo "${PREFIX}.${OCTET} OK `date`" >> ping.sh
        echo " OK"
    else
        echo "${PREFIX}.${OCTET} FAILED `date`" >> ping.sh
        echo " Failed"
    fi
done
