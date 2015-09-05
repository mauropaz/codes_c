#!/bin/bash
#This file was created on 09/05/2015

NUM=$(ping -c $1 $2 | grep packet | cut -d " " -f6)

echo $NUM

if [[ $NUM != "0%" ]]
        then
                speaker-test -t sine -l 1
                echo "You have lost a packet."

else
        echo "No packets lost."
fi
