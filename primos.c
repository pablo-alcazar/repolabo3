#include <stdio.h>

int identificador(int numero) {

    int varprim = 0;

    if (numero != (int)numero) {
        printf("El valor ingresado no es valido\n");
        return 0;
    } else if (numero <0) {
        printf("los numeros negativos no entran en la definicion de los primos\n");
        return 0;
    } else if (numero == 0) {
        printf("Cero no es ni primo ni compuesto\n");
        return 0;
    } else if (numero == 1) {
        printf("El uno no es ni primo ni copmpuesto, es la unidad\n");
        return 0;
    } else {
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                varprim=1;
                break;
            }
        }
        if (varprim == 1) {
        printf("El numero no es primo\n");
        } else {
        printf("el numero es primo\n");
        }
    }
    return 0;

}

int main() {
    int num = -1;
    printf("Hola buenas\n");
    printf("ingrese un numero para saber si es primo o no\n");
    int verificar = scanf("%d", &num);
    if (verificar == 1) {
        identificador(num);
    } else {
        printf("Entrada invalida\n");
    }
    return 0;
}
