#include <stdio.h>

int main(){

    char nombre[100];
    char apellido[100];
    int legajo;
    char carrera[100];

    printf("ingrese su nombre.\n");
    scanf("%s", nombre);

    printf("ingrese su apellido.\n");
    scanf("%s", apellido);

    printf("ingrese su numero de legajo.\n");
    scanf("%d", &legajo);

    printf("ingrese que carrera cursa.\n");
    scanf("%s", carrera);

    printf("\t\tSu nombre completo es %s %s\n.", nombre, apellido);
    printf("\t\tSu numero de legajo es %d\n.", legajo);
    printf("\t\tCursa %s.", carrera);




    return 0;
}