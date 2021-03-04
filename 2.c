#include <stdio.h>

int main()
{
    float n;
    float grausf;

    printf("Informe os graus em celcius: ");
    scanf("%f", &n);

    grausf = (n * 9 / 5 + 32);

    printf("Em celcius fica: %f\n em farenheit fica: %f\n ", n, grausf);

    printf("\n");
    return 0;
}
