#!/bin/bash

dir_path="./*"
files=`find $dir_path -type f`

for file in $files;
do
    s=`basename $file`
    echo $s
    if [[ "$s" != *.* ]]; then
        rm $file
    fi
done