#!/bin/bash

gcc primos/primos.c -o primos/ejecutable.c
./primos/ejecutable.c
rm primos/ejecutable.c

gcc suma/suma.c -o suma/ejecutable.c
./suma/ejecutable.c
rm suma/ejecutable.c

gcc piramide/piramide.c -o piramide/ejecutable.c
./piramide/ejecutable.c
rm piramide/ejecutable.c

gcc cadena/cadena.c -o cadena/ejecutable.c
./cadena/ejecutable.c
rm cadena/ejecutable.c

gcc matriz-regular/matriz-regular.c -o matriz-regular/ejecutable.c
./matriz-regular/ejecutable.c
rm matriz-regular/ejecutable.c
