#!/usr/bin/bash

for i in {1..500}; do
    ./random.sh >> output.txt
    exit_code=$?
    if (( exit_code==1 )); then 
        echo "$i"
        break
    fi
done
