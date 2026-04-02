#include <stdio.h>

int main (){

    int edad; 
    int dias; 
    int horas; 
    int minutos; 


    printf("ingrese la edad que tiene.\n");
    scanf("%d", &edad);

    dias  = edad * 365; 
    horas = edad * 8760; 
    minutos = edad * 525600; 

    printf("Tenes %d dias, %d horas y %d segundos vivo. \n", dias, horas, minutos); 

    return 0;
}