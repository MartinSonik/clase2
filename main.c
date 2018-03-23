#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero;
    int segundoNumero;
    int resultado;
    char respuesta;

    do{
    printf("Ingrese el primer numero\n");
    scanf("%d", &primerNumero);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &segundoNumero);

        if (primerNumero>0 && segundoNumero>0)
        {resultado = primerNumero + segundoNumero;
        printf("\nEl resultado es %d",resultado);
        }
        else
        {
            printf("\nError");
        }

        printf("\n Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c",&respuesta);
    }  while ( resultado == 's');

    return 0;
}
