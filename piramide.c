#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Hola buenas\n");
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 0; j < n - i; j++) {
            printf("    ");
        }

        num = i;

        for (j = 0; j < i; j++) {
            printf("%3d ", num++);
        }

        num -= 2;
        for (j = 0; j < i - 1; j++) {
            printf("%3d ", num--);
        }

        printf("\n");
    }

    return 0;
}
