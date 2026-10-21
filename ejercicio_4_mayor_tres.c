#include <stdio.h>

int main(void) {
    int a, b, c, mayor;

    printf("Ingrese tres numeros enteros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada no valida.\n");
        return 1;
    }

    if (a >= b && a >= c)
        mayor = a;
    else if (b >= a && b >= c)
        mayor = b;
    else
        mayor = c;

    printf("El mayor es: %d\n", mayor);

    return 0;
}
