#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct compu
{
    int velocidad;  // 1-3
    int anio;       // 2015 -  2024
    char *tipo_cpu; // tipo
    int cantidad;   // 1-8
} typedef Computadora;

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
void inicializa(Computadora *Lista);
void mostrar_lista(Computadora *Lista);
void mas_antigua(Computadora *Lista);
void mas_rapida(Computadora *Lista);

int main()
{
    srand(time_t(NULL));
    Computadora Lista_PC[5];
    inicializa(Lista_PC);       // b
    mostrar_lista(Lista_PC);    // c
    mas_antigua(Lista_PC);      // d
    mas_rapida(Lista_PC);       // e
    return 0;
}
void inicializa(Computadora *Lista)
{
    int i, tipo;
    for (i = 0; i < 5; i++)
    {
        Lista->velocidad = 1 + rand() % 4;
        Lista->anio = 2015 + rand() % 10;
        tipo = rand() % 6;
        Lista->tipo_cpu = tipos[tipo];
        Lista->cantidad = 1 + rand() % 9;
        *Lista++;
    }
}
void mostrar_lista(Computadora *Lista)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Velocidad: %d\n", (Lista + i)->velocidad);
        printf("Año: %d\n", (Lista + i)->anio);
        printf("Tipo: %s\n", (Lista + i)->tipo_cpu);
        printf("Cantidad: %d\n\n", (Lista + i)->cantidad);
    }
}
void mas_antigua(Computadora *Lista)
{
    int i, min = 2024, index;
    for (i = 0; i < 5; i++)
    {
        if ((Lista + i)->anio <= min)
        {
            min = (Lista + i)->anio;
            index = i;
        }
    }
    printf("----------------------\n\n");
    printf("La PC mas antigua es: \n");
    printf("Velocidad: %d\n", (Lista + index)->velocidad);
    printf("Año: %d\n", (Lista + index)->anio);
    printf("Tipo: %s\n", (Lista + index)->tipo_cpu);
    printf("Cantidad: %d\n\n", (Lista + index)->cantidad);
    printf("----------------------\n");
}

void mas_rapida(Computadora *Lista)
{
    int i, max = 0, index;
    for (i = 0; i < 5; i++)
    {
        if ((Lista + i)->velocidad >= max)
        {
            max = (Lista + i)->velocidad;
            index = i;
        }
    }
    printf("----------------------\n\n");
    printf("La PC mas rapida es: \n");
    printf("Velocidad: %d\n", (Lista + index)->velocidad);
    printf("Año: %d\n", (Lista + index)->anio);
    printf("Tipo: %s\n", (Lista + index)->tipo_cpu);
    printf("Cantidad: %d\n\n", (Lista + index)->cantidad);
    printf("----------------------\n");
}
