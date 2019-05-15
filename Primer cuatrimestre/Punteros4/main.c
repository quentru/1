#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 200;
    int* puntero;
    int** punteroPuntero;
    puntero = &a;
    punteroPuntero = &puntero;
    printf("%d\n", a);
    printf("%d\n", *puntero);
    printf("%d\n", **punteroPuntero);
    return 0;
}
