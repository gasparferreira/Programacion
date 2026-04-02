#include <stdio.h>


int main (){

    char nombre[100];
    char apellido[100];
    int edad;
    char ciudad[100];

    printf("ingrese su nombre.\n");
    scanf("%s", nombre);

    printf("ingrese su apellido.\n");
    scanf("%s", apellido);
    
    printf("ingrese su ciudad de origen.\n");
    scanf("%s", ciudad);
    
    printf("ingrese su edad.\n");
    scanf("%d", &edad);

    printf("Me llamo %s %s, tengo %d años y vivo en %s", nombre, apellido, edad, ciudad);

    return 0; 
}