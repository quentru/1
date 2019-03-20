#include <stdio.h>
#include <stdlib.h>
int main()
{
    //int valor;
    char valor;
    printf("Ingrese un caracter\n");
    fflush(stdin);
    scanf("%c", &valor);
    switch(valor)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
        printf("A dormir");
        break;
    case '7':
    case '8':
    printf("Buenos dias");
        break;
    /*case '10':
    case '11':
    case '12':
    case '13':
    case '14':
    case '15':
    case '16':
    case '17':
    case '18':
    case '19':
    case '20':
    case '21':
    case '22':
    case '23':
        printf("cualquier cosa");
        break;*/
    default:
        printf("Esta hora no existe");
        break;
    }
    /*printf("Ingrese la hora\n");
    scanf("%d",&valor);
    switch(valor)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    printf("A Dormir");
    break;
    case 7:
    case 8:
    case 9:
    printf("Buenos dias");
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
        printf("cualquier cosa");
        break;
    default:
        printf("Esta Hora no existe");
        break;
    }*/
}
//#include<ctype.h>//trabaja con tipos
//rta=toupper();//para que acepte minusculas
//fflush(stdin);
