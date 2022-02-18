#!/bin/bash

cd Atcoder/Beginner

for i in {231..290};
do
    mkdir $i
    cd $i
    cp ../sample.cpp .
    mv sample.cpp A.cpp
    cp ../sample.cpp .
    mv sample.cpp B.cpp
    cp ../sample.cpp .
    mv sample.cpp C.cpp
    cp ../sample.cpp .
    mv sample.cpp D.cpp
    cd ..
done