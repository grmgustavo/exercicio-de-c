//6 - Faça um programa que receba do usuário um número N e mostre  todos os números pares entre 0 e N.


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int n,div = 2;

    printf("Informe o N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if(i%div == 0){
            printf("%d ", i);
        }
    }

    printf("\n\n");
    return 0;
}
