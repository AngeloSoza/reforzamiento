#include<stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Obtener la raiz cuadrada de un numero
    float num, raiz;
    printf("ingrese un numero: ");
    scanf("%f", &num);
    raiz = sqrt(num);
    printf("La raiz cuadrada de %.2f es %.2f", num, raiz);


    return 0;
}

    
    
