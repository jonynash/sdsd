#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int validarCadena(char[],int);
void mostrarNombres(char[][20],int);
void mostrarNombre(char[]);
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


    mostrarNombres(mat, 5);

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

void mostrarNombres(char nombres[][20],int cant)
{
    for(int i=0;i<cant;i++)
    {
        mostrarNombre(nombres[i]);
    }
}
void mostrarNombre(char nombre[])
{
    printf("\n%s", nombre);
}

void OrdenarNombres(char)
{


    for(int i=0; i<4,i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(mat[i],mat[j]>0)
               {
                   strcpy(aux,mat[i]);
                   strcpy(mat[i],mat[j]);
                   strcpy(mat[j],aux);
               }
        }
    }

}
