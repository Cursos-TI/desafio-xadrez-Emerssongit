#include <stdio.h>

int main(){
    
    int c = 1;
    int b = 1;


    for (int i = 1; i <= 5; i++)
    {
    printf("direita\n");
    }

    while (c <= 5) {
        printf("CIMA\n", &c);
        c++;
    }

    do {

        printf("ESQUERDA\n", &b);
        b++;

    

    } while ( b <= 5 );

    return 0;
}