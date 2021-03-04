#include <stdio.h>

int main()
{
    int n;

    printf("Informe o número: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("\n é par");
    }
    else
    {
        printf("\n não é par");
    }

    printf("\n");
    return 0;
}
