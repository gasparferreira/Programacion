#include <stdio.h>

int main(){

    char letra;
    int edad;
    float altura;
    int anio;
    int anioNac;

    printf("Ingrese la letra de su inicial:\n");
    scanf("%c", &letra);

    printf("El numero de su letra es: %d.\n", letra);
    
    printf("Ingrese su altura:\n");
    scanf("%f", &altura);

    if (altura >= 1.60 == altura <= 1.90){
        printf("Estas en la altura promedio.\n");
    } else {
        printf("No estas en la estatura promedio.\n");
    }

    printf("Ingrese el año actual: \n");
    scanf("%d", &anio);

    printf("Ingrese el año en que nacio: \n");
    scanf("%d", &anioNac);

    edad = anio - anioNac;

    printf("Tenes %d anios.", edad);

    return 0; 
}