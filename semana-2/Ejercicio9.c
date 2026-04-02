#include <stdio.h>

int main (){
    int millas; 
    double res; 

    printf("ingrese la cantidad de millas que desea convertir a km. ");
    scanf("%d", &millas);

    res = millas * 1.60934; 

    printf("el resultado es: %.4lf", res);

    return 0;
}

// 1 milla = 1.60934 km
