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
int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
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
int getFloat(float* input,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    int value=-1;
    printf("%s\n", message);
    scanf("%f", input);
    while(*input<lowLimit || *input>hiLimit)
        {
            printf("%s", eMessage);
            scanf("%f", input);
        }
        value = 0;
    //*input = 1234.88;
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
int getChar(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)
{
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
            *input=character;
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
int getString(char* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
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
int getGenre(char* input, char message[], char eMessage[], char genre, char otherGenre)
{
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
