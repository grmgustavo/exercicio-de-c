#include <stdio.h>


typedef struct {
    int x, y;
} Coordenada;

Coordenada PreencherCoordenada(int x, int y) {
    Coordenada NovaCoordenada;

    NovaCoordenada.x = x;
    NovaCoordenada.y = y;

    return NovaCoordenada;
}

const char* CalculaQuadrante(Coordenada c) {

    if (c.y > 0 && c.x > 0) {
        return "Coordenada no primeiro qudrante";
    }

    if (c.y > 0 && c.x < 0) {
        return "Coordenada no segundo qudrante";
    }

    if (c.y < 0 && c.x < 0) {
        return "Coordenada no terceiro qudrante";
    }

    if (c.y < 0 && c.x > 0) {
        return "Coordenada no quarto qudrante";
    }

    if(c.y == 0 && c.x > 0 || c.y == 0 && c.x < 0){
        return "Coordenada sobre eixo Y";
    }

    if(c.y > 0 && c.x == 0 || c.y < 0 && c.x == 0){
        return "Coordenada sobre eixo X";
    }

    return "Ponto neutro";
}

void MostrarQuadrante(Coordenada c) {

    const char* QUADRANTE = CalculaQuadrante(c);
    printf("\n x %d Y %d \n", c.x, c.y);
    printf("\n  quadrante %s", QUADRANTE);
}

int main() {
    Coordenada vet[2];
    int tamVet = (sizeof(vet) / sizeof(vet[0]));

    printf("Digite %d Coordenadas separando por espacos x e, y \n", tamVet);

    for (int i = 0; i < tamVet; i++) {
        int x, y;
        printf("Coordenada %d", i + 1);
        printf("\n digite falor de x \n");
        scanf("%d", &x);
        fflush;
        printf("\n digite o valor de Y\n");
        scanf("%d", &y);
        fflush;
        vet[i] = PreencherCoordenada(x, y);
    }

    for (int i = 0; i < tamVet; i++) {

        MostrarQuadrante(vet[i]);
    }


    return 0;
}

