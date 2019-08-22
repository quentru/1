#include <stdio.h>
#include <stdlib.h>

int main()
{
    float promedioAlturaHombres;
    int contadorHombres=0;
    float sumaDeAlturasMasculino=0;
    int promedioEdades;
    int sumaEdades=0;
    int contador=0;
    float alturaMasAlta=0;
    int edadMasVieja=0;
    int edadMasJoven=1000;
    float alturaDeMasVieja;
    float alturaMasJoven;
    float alturaMasBaja=1000.00;
    char sexo;
    char sexoAlturaMasAlta;
    float altura;
    int edad;
    int edadHombreMasBajo;
    char continuar='s';
    while(continuar=='s')
            {
                printf("Ingrese su altura\n");
                scanf("%f",&altura);
                while(altura < 1.0 || altura > 2.0)
                    {
                        printf("Reingrese su altura entre 1.0 y 2.0\n");
                        scanf("%f",&altura);
                    }
                fflush(stdin);
                printf("Ingrese su sexo\n");
                scanf("%c",&sexo);
                while(sexo != 'm' && sexo != 'f')
                    {
                        fflush(stdin);
                        printf("Reingrese su sexo entre f o m\n");
                        scanf("%c",&sexo);
                    }
                    if (sexo=='m')
                            {
                                sumaDeAlturasMasculino = sumaDeAlturasMasculino + altura;
                                contadorHombres++;
                            }
                printf("Ingrese su edad\n");
                scanf("%d",&edad);
                while(edad<0 || edad>110)
                    {
                        printf("Reingrese su edad entre 0 y 110 años\n");
                        scanf("%d",&edad);
                    }
            if(sexo=='f' && edad>edadMasVieja)
                        {
                            edadMasVieja=edad;
                            alturaDeMasVieja=altura;
                        }
            if(edad<edadMasJoven)
                        {
                            edadMasJoven=edad;
                            alturaMasJoven=altura;
                        }
            if(altura>alturaMasAlta)
                        {
                            alturaMasAlta=altura;
                            sexoAlturaMasAlta=sexo;
                        }
            if(sexo=='m' && altura<alturaMasBaja)
                        {
                            edadHombreMasBajo=edad;
                            alturaMasBaja=altura;
                        }
                        contador++;
                        sumaEdades=sumaEdades+edad;
                fflush(stdin);
                printf("\ndesea continuar??? ingrese s/n \n");
                scanf("%c",&continuar);
            }
            promedioEdades=sumaEdades/contador;
            promedioAlturaHombres=sumaDeAlturasMasculino/contadorHombres;
            printf("la altura de la mujer mas longeva es %.2f, La altura de la persona mas joven es %.2f, el sexo de la persona mas alta es %c, edad del hombre mas bajo es %d\n el promedio de las edades es %d\n el promedio de la altura de hombre es de %.2f", alturaDeMasVieja, alturaMasJoven, sexoAlturaMasAlta, edadHombreMasBajo, promedioEdades, promedioAlturaHombres);
            return 0;
}
     /*if(edad<=12)
        {
            printf("usted es nino");
        }
        else if(edad<18 && edad>12)
        {
            printf("usted es adolescente");
        }else
        {
            printf("usted es adulto");
        }*/

     /*if(edad<=12)
        {
            printf("usted es nino");
        }
        else if(edad<18 && edad>12)
        {
            printf("usted es adolescente");
        }else
        {
            printf("usted es adulto");
        }*/
    /*printf("Ingrese su altura\n");
    scanf("%f",&altura);
    fflush(stdin);
    printf("Ingrese su sexo\n");
    scanf("%c",&sexo);
    printf("Ingrese su edad\n");
    scanf("%d",&edad);
    printf("su sexo es %c ,su edad es %d , se altura es %.2f\n",sexo ,edad ,altura );
    if(edad<13)
        {
          printf("usted es nino");
        }else
        {
            if(edad<18)
                {
                    printf("usted es adolescente");
                }else
                {
                   printf("usted es adulto");
                }
        }*/
     /*if(edad<=12)
        {
            printf("usted es nino");
        }
        else if(edad<18 && edad>12)
        {
            printf("usted es adolescente");
        }else
        {
            printf("usted es adulto");
        }*/

    /*altura=1.69;
    edad = 13;
    printf("Su edad es %d\n", edad);
    printf("Su edad es %c\n", edad);
    printf("Su edad es %d , Su altura es %.2f\n",edad, altura);*/
