#include <stdio.h>

int main (){

    int gradosC;
    float gradosF;

    printf("Ingrese los grados Celsius que desea convertir. ");
    scanf("%d", &gradosC);

    gradosF = (gradosC * 9/5.0) + 32; 

    printf("El resultado en grados Fahrenheit es: %.1f\n", gradosF);

    return 0;
}