#include <stdio.h>

 int main(int argc, char const *argv[])
 {
    int palpite, numero = 10;
        printf("De o seu primeiro palpite: ");
    while (palpite != numero)
    {
        scanf("%d", &palpite);
        if (palpite>numero)
        {
            printf("\nMais pra baixo ");
        }else if (palpite<numero)
        {
            printf("\nMais para cima ");
        }
        if (palpite != numero)
        {        
            printf("\nTente de novo: ");
        }
        
        
    }
    printf("\nParabens, voce acertou o numero %d", numero);
    return 0;
 }
 