#!usr/bin/bash

marco() {
    curr_path=$(pwd)
    echo "current path is $curr_path"
    export curr_path
}

polo() {
    cd $curr_path
}
