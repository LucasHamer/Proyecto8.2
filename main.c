#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[10],apellido[10],unido[20];
    printf("Ingrese nombre: ");
    gets(nombre);
    printf("Ingrese apellido: ");
    gets(apellido);

    strcat(nombre,", ");
    strcat(nombre,apellido);
    strcpy(unido,nombre);

    puts(unido);

    return 0;
}
