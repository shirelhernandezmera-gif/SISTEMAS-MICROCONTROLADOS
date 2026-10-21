#include <stdio.h>

int main(void) {
    int n, i = 1;
    float num, suma = 0.0f, promedio;

    printf("Cuantos numeros desea ingresar? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Debe ingresar una cantidad entera mayor que cero.\n");
        return 1;
    }

    while (i <= n) {
        printf("Numero %d: ", i);
        if (scanf("%f", &num) != 1) {
            printf("Entrada no valida.\n");
            return 1;
        }

        suma += num;
        i++;
    }

    promedio = suma / n;

    printf("Suma total: %.2f\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
