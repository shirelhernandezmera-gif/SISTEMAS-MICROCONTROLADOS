#include <stdio.h>

#define PI 3.14159

int main(void) {
    float radio, area, perimetro;

    printf("Ingrese el radio del circulo: ");
    if (scanf("%f", &radio) != 1 || radio < 0) {
        printf("Ingrese un radio valido (mayor o igual a cero).\n");
        return 1;
    }

    area = PI * radio * radio;
    perimetro = 2 * PI * radio;

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
