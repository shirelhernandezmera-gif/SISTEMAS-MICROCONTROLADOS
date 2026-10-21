#include <stdio.h>

int main(void) {
    int a, b;

    printf("Ingrese el primer numero: ");
    if (scanf("%d", &a) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    printf("Ingrese el segundo numero: ");
    if (scanf("%d", &b) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicacion: %d\n", a * b);

    if (b != 0) {
        printf("Division: %.2f\n", (float)a / b);
        printf("Modulo: %d\n", a % b);
    } else {
        printf("No se puede dividir entre cero.\n");
    }

    return 0;
}
