#include <stdio.h>
#include <stdlib.h>
int main()
{
    int contador=0;
    int numero;
    int acumulador;
    int numeroMayor;
    int numeroMenor;
    float promedio;
    printf("Ingrese un numero\n");
    scanf("%d", &numero);
    numeroMayor = numero;
    numeroMenor = numero;
    acumulador = numero;
    for(contador=0;contador<4;contador++)
        {
            printf("Ingrese un numero\n");
            scanf("%d", &numero);
            acumulador = acumulador + numero;
            if(numeroMayor<numero)
                {
                    numeroMayor = numero;
                }
            if(numeroMenor>numero)
                {
                    numeroMenor = numero;
                }
        }
        promedio = (float)acumulador / 5;
        printf("El menor numero es %d y el numero mayor es %d \n",numeroMenor, numeroMayor);
        printf("La suma de todos los numeros es %d \n", acumulador);
        printf("El promedio de los numeros es %f", promedio);
        return 0;
}
