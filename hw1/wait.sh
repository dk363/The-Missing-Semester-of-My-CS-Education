#!/usr/bin/bash

sleep 60 & 
PID=$!

wait $PID
ls
