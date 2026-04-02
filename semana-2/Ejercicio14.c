#include <stdio.h>

int main (){
    char letra; 
    char letra3;

    printf("Ingrese una letra mayuscula: "); 
    scanf(" %c", &letra);

    if (letra >= 'A' && letra <= 'Z'){
        letra3 = letra + 3;

        if (letra3 > 'Z'){
            letra3 = 'A' + (letra3 - 'Z' - 1);
        }

        printf("Tu codigo secreto es %c\n", letra3);
    } else {
        printf("No ingresaste una letra mayuscula.\n");
    }
    
    return 0;
}