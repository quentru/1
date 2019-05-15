#include <stdio.h>
#include <stdlib.h>
#define TAM 5
void getChar(char* message, char* caracter);
int main()
{
    char mensaje = "Ingrese texto";
    char sexo;
    char nombre[20]="Sebastian";

    getChar(mensaje, &sexo);
    printf("El sexo es %c", sexo);

    return 0;
}
void getChar(char* message, char* caracter)
{
    printf("%s", message);
    fflush(stdin);
    scanf("%c", caracter);
}
/*void mostrarVector1(int vec[],int tam);
void mostrarVector2(int vec[],int tam);
void mostrarVector3(int *vec,int tam);
void mostrarVector4(int *vec,int tam);*/
/*
//int numeros[]={1,5,3,4,4};
    //int x = 10;
    /*mostrarVector1(numeros, TAM);
    mostrarVector2(numeros,TAM);
    mostrarVector2(&numeros ,TAM);
    mostrarVector2(&numeros ,TAM);*/
    /*for(int i=0;i<5;i++){
    printf("%x\n", *(vec+i));
    }*/
   /* printf("%x\n", &vec);
    printf("%x\n", &vec[0]);*/
   /* int* p = &x;
    int* q = &x;
    int** r = &p;
    printf("%d\n",**r);
    printf(" direccion de x %x\n", &x);
    printf("antes de llamar a leer puntero x vale %d\n", x);
    leerPuntero(&x);
    /*int* p;
   *///printf("despues de llamar a leer puntero x vale %d\n", x);
    /*p = &x;
    printf("%d\n", *p);
    */
    /*printf("%d\n", p);
    printf("%d\n", &p);
    printf("%d\n", &x);
    //printf("Hello world!\n");*/
/*void leerPuntero(int* p)
{
    printf(" direccion guardada en p: %x\n", p);
    *p = 38;
}*/
///corchetes son para nomenclatura vectorial
///la otra s nomenclatura de punteros
///Si se recibe como corchete se trabaja como corchete y si se recibe como puntero se recibe todo como puntero
/*void mostrarVector1(int vec[],int tam)
{
    for(int i =0; i<tam; i++)
        {
            printf("%d\n",vec[i]);
        }
        printf("\n\n");
}
void mostrarVector2(int vec[],int tam)
{
    for(int i = 0; i<tam;i++)
        {
            printf("%d\n", *(vec+i));
        }
            printf("\n\n");
}

void mostrarVector3(int *vec,int tam)
{
    for(int i =0; i<tam; i++)
        {
            printf("%d\n",vec[i]);
        }
        printf("\n\n");
}
void mostrarVector4(int vec[],int tam)
{
    for(int i = 0; i<tam;i++)
        {
            printf("%d\n", *(vec+i));
        }
                  printf("\n\n");
}
*/
