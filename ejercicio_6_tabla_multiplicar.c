#include <stdio.h>

int main(void) {
    int num, i;

    printf("Ingrese un numero: ");
    if (scanf("%d", &num) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
