#include <stdio.h>

int main (){

    char letra, letraANT, letraPOS; 

    printf("ingrese una letra.  ");
    scanf("%c", &letra);

    letraANT = letra - 1;
    letraPOS = letra + 1; 


    printf("Antes de %c esta %c.\nDespues de %c esta %c.\n", letra, letraANT, letra, letraPOS);

    return 0;
}