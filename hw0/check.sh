#!/bin/bash

curl https://missing.csail.mit.edu/ | grep "<li>" --after-context 3 | grep "strong" --after-context 2 | grep "href" | wc -l 
