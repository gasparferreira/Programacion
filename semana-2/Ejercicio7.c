#include  <stdio.h>

int main (){

    const pi = 3.14159;
    double radio;
    double area;

    printf("ingrese el radio que desea ser calulado.\n");
    scanf("%lf", &radio);

    area = pi * radio * radio;

    printf("El area calculada es: %.2lf.", area);

    return 0;
}