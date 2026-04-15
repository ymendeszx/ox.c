#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Você precisa digitar um número inteiro.\n");
        exit(0);
    }

    int numero = atoi(argv[1]);

    if (numero % 2 == 0)
    {
        printf("Você digitou %d, que é par, então a letra é O\n", numero);
    }
    else
    {
        printf("Você digitou %d, que é ímpar, então a letra é X\n", numero);
    }

    printf("Criado por Marcelo Mendes");
}