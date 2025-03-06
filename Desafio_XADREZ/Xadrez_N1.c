#include <stdio.h>

int main(){

    //variaveis bispo e rainha.
    int c = 1;
    int b = 1;

     // TORRE, SIMULA MOVIMENTO horizontalmente ou verticalmente, Sendo aqui horizontal a direita.
    printf("MOVIMENTO DA TORRE.\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }
     // BISPO, simula movimento em diagonal, em cima direita 5 casas.
    printf("MOVIMENTO DO BISPO.\n");
    while (c <= 5) {

        printf("Cima, Direita.\n", &c);
        c++;
    }
     // RAINHA, move em todas direções, 8 casas a esquerda horizontal.
    printf("MOVIMENTO DA RAINHA.\n");
    do {
        
        printf("Esquerda\n", &b);
        b++;

    } while ( b <= 8 );

    return 0;
}