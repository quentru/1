#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit){
    int value=-1;
    printf("%s\n", message);
    scanf("%d", input);
    while(*input<lowLimit || *input>hiLimit)
        {
            printf("%s", eMessage);
            scanf("%d", input);
        }
        value=0;
    return value;
}

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getFloat(float* input,char message[],char eMessage[], float lowLimit, float hiLimit){
    int value=-1;
    printf("%s\n", message);
    scanf("%f", input);
    while(*input<lowLimit || *input>hiLimit)
        {
            printf("%s", eMessage);
            scanf("%f", input);
        }
        value = 0;
    return value;
}


/**
* \brief Solicita un caracter al usuario y lo valida
* \param input Se carga el caracter ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el caracter [0] si no [-1]
*
*/
int getChar(char* input,char message[],char eMessage[], char lowLimit, char hiLimit){
    int value=-1;
    char character;
    printf("%s", message);
    fflush(stdin);
    scanf("%c", &character);
    character = tolower(character);
    while(character < lowLimit || character > hiLimit)
        {
            printf("%s",eMessage);
            fflush(stdin);
            scanf("%c", &character);
            *input = character;
        }
        value=0;
    return value;
}


/**
* \brief Solicita una cadena de caracteres al usuario y la valida
* \param input Se carga el string ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Longitud mínima de la cadena
* \param hiLimit Longitud máxima de la cadena
* \return Si obtuvo la cadena [0] si no [-1]
*
*/
int getString(char* input,char message[],char eMessage[], int lowLimit, int hiLimit){
    int value=-1;
    printf("%s", message);
    gets(input);
    while(strlen(input)<lowLimit || strlen(input)>hiLimit)
        {
            printf("%s", eMessage);
            gets(input);
        }
        value=0;
    return value;
}

/**
* \brief Solicita un caracter al usuario que indicaria el sexo del mismo y lo valida
* \param input Se carga el caracter deseado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param genre es uno de los generos
* \param otherGenre es el otro genero
* \return Si obtuvo eel caracter [0] si no [-1]
*
*/
int getGenre(char* input, char message[], char eMessage[], char genre, char otherGenre){
    char character;
    int value = -1;
    printf("%s", message);
    fflush(stdin);
    scanf("%c", &character);
    while(character != genre &&  character!= otherGenre)
        {
            printf("%s", eMessage);
            scanf("%c", &character);
        }
        *input = character;
        value = 0;
        return value;
}


int getEmail(char* input, char message[], char eMessage[],int lowLimit,int hiLimit){
int r, rgetString;
int value = 0;
rgetString = getString(&input, &message, &eMessage, lowLimit, hiLimit);
for(int i=0; i<strlen(input);i++)
    {
        r = isChar(&input[i]);
        while(r==2)
            {
                printf("%s", eMessage);
                fflush(stdin);
                gets(input);
            }
    }
    if(r==0 && rgetString==0)
        {
            printf("su email se valido correctamente");
        }
return value;
}



int isChar(char* input)
{
    char caracter;
    //char punto='.';
    int value = 1;
    /*printf("%s", message);
    fflush(stdin);
    scanf("%c", &caracter);*/
    if(caracter <64 || caracter>90 && caracter<97 || caracter >122 )
        {
            value=2;
            /*printf("%s", eMessage);
            fflush(stdin);
            scanf("%c", &caracter);*/
        }
        *input = caracter;
    value=0;
    return value;
}

int getDate(int* inputY, int* inputM, int* inputD, char message[], int yLowLimit, int yHiLimit){

    int day, month, year;
    int flag=0;
    int error = 1;
    char messageYear[60]="Ingrese el anio de ";
    char messageMonth[60]="Ingrese el mes de ";
    char messageDay[60]="Ingrese el dia de ";
    strcat(messageYear, message);
    strcat(messageMonth, message);
    strcat(messageDay, message);

    getInt(&year,messageYear," --El anio que usted ingreso no esta en nuestro rango-- \n", yLowLimit, yHiLimit);
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        flag = 1;
    }
    *inputY = year;
    getInt(&month,messageMonth,"--Se debe elegir uno de los doce meses--\n", 1, 12);
    *inputM = month;
    if(flag==0 && month == 2)
    {
        getInt(&day,messageDay," --El dia de este mes debe estar entre los valores 1 y 28--\n", 1, 28);
    }
    else if(flag==1 && month == 2)
    {
        getInt(&day,messageDay," --El dia de este mes debe estar entre los valores 1 y 29--\n", 1, 29);
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        getInt(&day,messageDay," --El dia de este mes debe estar entre los valores 1 y 30--\n", 1, 30);
    }
    else
    {
        getInt(&day,messageDay," --El dia de este mes debe estar entre los valores 1 y 31--\n", 1, 31);
    }
    *inputD = day;
    error = 0;
    return error;

}

