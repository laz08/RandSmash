#!/bin/bash

clear
echo "Creant  el Makefile"
qmake RandSmash.pro
echo
echo "Executant el makefile"
make
echo
echo "Executant RandSmash"
./RandSmash
