#include <stdio.h>
#include <stdlib.h>
void mostrarCadena(char* punteroCadena);
void mostrarCadenaDos(char* punteroCadena);
int main()
{
    char letra='a';
    char palabra[]="Hola";
    char* p = NULL;
    p = palabra;
    mostrarCadena(p);
    system("cls");
    mostrarCadenaDos(p);
    return 0;
}
    void mostrarCadena(char* punteroCadena)
        {
            while(*punteroCadena != '\0')
            {
                printf("%c\n",*punteroCadena);
                printf("%p\n",punteroCadena);
                system("pause");
                punteroCadena++;
            }
        }
    void mostrarCadenaDos(char* punteroCadena)
        {
            int i=0;
            while(*(punteroCadena+i)!= '\0')
            {
                printf("%c\n",*(punteroCadena+i));
                printf("%p\n", punteroCadena);
                system("pause");
                i++;
            }
        }
