#!/bin/bash

for file in $(find *); do 
    if [ -f "$file" ]; then
        ext="${file##*.}"
        echo -e "$ext"
    fi
done
