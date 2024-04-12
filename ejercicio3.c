//Leer los nombres y los apellidos de una persona
//Mostrar el nombre completo

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char nombres[60];
    char apellidos[60];

    printf("Dime tus nombres: ");
    // Leer toda la cadena de caracteres hasta que haya un salto de linea
    scanf(" %[^\n]", nombres);
    printf("Dime tus apellidos: ");
    scanf(" %[^\n]", apellidos);
    printf("Tu nombre completo es %s %s", nombres, apellidos);

    return 0;
}
