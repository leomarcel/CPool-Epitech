#!/bin/bash

clear
echo "complilation ggc"
echo -e "--------------------------\n"
gcc $1 $2 $3
echo "resultat execution a.out"
echo -e "---------------------------\n"
./a.out
rm ./a.out
