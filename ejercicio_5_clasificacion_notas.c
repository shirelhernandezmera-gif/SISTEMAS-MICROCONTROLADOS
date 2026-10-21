#include <stdio.h>

int main(void) {
    int nota;

    printf("Ingrese una nota (0-10): ");
    if (scanf("%d", &nota) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    switch (nota) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Deficiente\n");
            break;
        case 5:
        case 6:
            printf("Regular\n");
            break;
        case 7:
        case 8:
            printf("Bueno\n");
            break;
        case 9:
        case 10:
            printf("Excelente\n");
            break;
        default:
            printf("Nota fuera de rango.\n");
    }

    return 0;
}
