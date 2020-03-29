#!/bin/bash

clear
echo "complilation ggc"
echo -e "--------------------------\n"
gcc $1 lib/my/libmy.a
echo "resultat execution a.out"
echo -e "---------------------------\n"
./a.out $2
rm ./a.out
