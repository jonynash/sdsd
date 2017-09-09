#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char aux[50];
    char mat[5][20];

    for(int i=0; i<5; i++)
    {
        printf("Ingrese nombre: ");
        gets(aux);

        while(!validarCadena(aux,20))
        {
            printf("Error. Nombre demasiado largo.");
            gets(aux);
        }
        strcpy(mat[i],aux);
    }

    for(int i=0; i<5; i++)
    {
     printf("\n%s", mat[i]);

    }


    return 0;
}


//FUNCION

int validarCadena(char cadena[], int tam)
{
    int esValido=0;
    if(strlen(cadena)<tam)
    {
        esValido=1;
    }
    return esValido;
}
