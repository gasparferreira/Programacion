#include <stdio.h>

int main (){

    char producto[100];
    float precio;

    printf("ingrese el nombre de su producto.\n");
    scanf("%s", producto);

    printf("ingrese el precio de su producto.\n");
    scanf("%f", &precio);

    printf("\nProducto: %s. Precio: $%.2f", producto, precio);

    return 0;
}