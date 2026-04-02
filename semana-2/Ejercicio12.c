#include <stdio.h>

int main (){

    float nota1, nota2, nota3, promedio, suma;

    printf("ingrese las 3 notas seguidas. \n");
    scanf("%f, %f, %f", &nota1, &nota2, &nota3);

    suma = nota1 + nota2 + nota3;

    promedio = suma / 3;

    printf("Tu promedio es %.2f", promedio);

    return 0;
}