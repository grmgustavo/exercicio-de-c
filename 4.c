#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    printf("informe um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 0; i > n; i++)
    {
        printf(" %d ", i);
    }

    printf("\n\n");

    return 0;
}
