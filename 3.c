#include <stdio.h>

int main()
{
    int n1, n2;

    printf("informe o N1: ");
    scanf("%d", &n1);

    printf("informe o N2: ");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        printf("O N1 é menor que o N2");
    }
    if (n1 > n2)
    {
        printf("O N1 é maior que o N2");
    }

    if (n1 == n2)
    {
        printf("os dois numeros são iguais\n");
    }

    printf("\n\n");

    return 0;
}
