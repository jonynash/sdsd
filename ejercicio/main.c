#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* char vec[20];
    char mat[5][20];

    printf("Ingrese nombre: ");
    gets(vec);

    printf("%s", vec);*/



char mat[5][20];

    for(int i=0; i<5;i++)
    {
        printf("Ingrese nombre: ");
        gets(mat[i]);
    }
    for(int i=0; i<5;i++)
    {
        printf("\n%s", mat[i]);
    }
    printf("\n\n");


    return 0;
}
