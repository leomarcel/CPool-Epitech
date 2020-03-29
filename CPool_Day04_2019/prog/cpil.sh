#!/bin/bash

clear
echo "complilation ggc"
echo -e "--------------------------\n"
gcc $1
echo "resultat execution a.out"
echo -e "---------------------------\n"
./a.out
rm ./a.out
