//7 - Faça um programa que receba do usuário dois números N e M e mostre na tela todos os números entre N e M.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, m;

    printf("Informe o N: ");
    scanf("%d", &n);
    printf("Informe o M: ");
    scanf("%d", &m);

    while (n<=m)
    {
        printf(" %d ", n);

        n++;
    }
    

    printf("\n\n");
    return 0;
}
