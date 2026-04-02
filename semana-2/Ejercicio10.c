#include <stdio.h>

int main (){

    int propina;
    double cantPropina;
    double cuenta; 

    printf("ingrese cuanto le salio la cuenta. ");
    scanf("%lf", &cuenta);

    printf("ingrese en porcentaje la cantidad de propina que desea dejar. ");
    scanf("%d", &propina);

    cantPropina = propina * cuenta / 100;

    printf("tiene que dejar $%.2lf.", cantPropina);

    return 0;
}