#!/bin/bash

set -x

i=0
for i in $(seq 1 100); do
        ./eq42.sh 2> error.txt 1>> log.txt
        status="$?"
        i=$((i+1))
        if [ "$status" -eq 1 ]; then
                echo "script runs $i times" 
                exit 0
        fi        
done
