#include <stdio.h>

int main (){
    int hora, min, seg, seg2, resto;
    
    printf("ingrese la cantidad de segundos que quiere convertir. \n");
    scanf("%d", &seg);

    hora = seg / 3600;
    resto = seg % 3600;
    min = resto / 60;
    seg2 = resto % 60;

    printf("%d hora, %d minutos, %d segundos.", hora, min, seg2);


    return 0; 
}

// 3600 s = 1h 
// 60 s = 1min