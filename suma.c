#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumarvar(int liminf, int limsup) {
    srand(time(NULL));
    int cont = 0;
    int vartotal = 0;
    int cap = limsup - liminf;
    while (cont < 1000) {
        int num = rand() % cap + liminf;
        if (num % 2 == 0) {
            vartotal += num;
            cont++;
        }
    }
    printf("El resultado final de la suma de numeros pares aleatorios entre %d y %d es: %d\n", liminf, limsup, vartotal);
    return 0;
}


int main() {
    int linf = 0;
    int ltop = 0;
    printf("Hola buenas\n");
    printf("Ingrese el limite inferior para la suma\n");
    scanf("%d", &linf);
    printf("Ingrese el limite superior para la suma\n");
    scanf("%d", &ltop);
    sumarvar(linf, ltop);
    return 0;
}

