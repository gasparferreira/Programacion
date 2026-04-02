#include <stdio.h>

int main(){

    int distancia; 
    int tiempo; 
    int velocidad; 

    printf("ingrese la cantidad de kilomtros que hizo.\n");
    scanf("%d", &distancia);

    printf("ingrese en cuantas horas lo hizo.\n");
    scanf("%d", &tiempo);

    velocidad = distancia / tiempo; 

    printf("Lo hizo a %d kilometros. ", velocidad);


    return 0; 
}