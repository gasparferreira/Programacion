#include <stdio.h>

int main (){

    int fabricacion;
    int actual;
    int resta; 
    char obj[100];

    printf("ingrese su objeto favorito.\n");
    scanf("%s", obj);

    printf("ingrese en que año nos encontramos.\n");
    scanf("%d", &actual);

    printf("ingrese en que año se fabrico el objeto.\n");
    scanf("%d", &fabricacion);

    resta = actual - fabricacion; 

    printf("Mi objeto es %s, se fabrico en el año %d y lleva en circulacion %d años.", obj, fabricacion, resta);


    return 0;
}