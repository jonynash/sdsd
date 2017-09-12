#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct
{
  int legajo;
  char nombre[50];
  int edad;
  float peso;
  char sintoma[50];
}ePaciente;

void mostrarPaciente(ePaciente);
void mostrarTodosLosPacientes(ePaciente[], int);
void cargarPacientes(ePaciente[], int);

int main()
{
    ePaciente listaPacientes[TAM];
    ePaciente paciente2;
    int i;

    for(i=0; i<TAM; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &listaPacientes[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(listaPacientes[i].nombre);

        printf("Ingrese edad: ");
        scanf("%d", &listaPacientes[i].edad);

        printf("Ingrese peso: ");
        scanf("%f", &listaPacientes[i].peso);
        printf("Ingrese sintoma: ");
        fflush(stdin);
        gets(listaPacientes[i].sintoma);
    }

    mostrarTodosLosPacientes(listaPacientes, TAM);




    return 0;
}

void mostrarTodosLosPacientes(ePaciente lista[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        mostrarPaciente(lista[i]);
    }

}

void mostrarPaciente(ePaciente paciente)
{
      printf("%d--%s--%d--%f--%s\n", paciente.legajo,paciente.nombre, paciente.edad, paciente.peso, paciente.sintoma);
}


void cargarPacientes(ePaciente lista[],int tam)
{

}
