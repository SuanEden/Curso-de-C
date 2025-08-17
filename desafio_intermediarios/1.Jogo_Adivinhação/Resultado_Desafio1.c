#include <stdio.h>
#include <stdlib.h> /// Importa o rand e srand
#include <time.h>   /// Importa time

 int main(int argc, char const *argv[]){
    srand(time(NULL)); /// Inicializa o gerador de números aleatórios com base no relógio do sistema
    int palpite = 0, numero;
    
    printf("Voce quer de 1 ate ");
        scanf("%d", &numero);
        
    /// Sorteia o número aleatório entre 1 e o valor digitado
    numero = (rand() % numero) + 1; 
    
    printf("De o seu primeiro palpite: ");
    while (palpite != numero){
        scanf("%d", &palpite);
        if (palpite>numero){
            printf("\nMais pra baixo ");
        }else if (palpite<numero){
            printf("\nMais para cima ");
        }
        if (palpite != numero) printf("\nTente de novo: ");
    }
    printf("\nParabens, voce acertou o numero %d", numero);
    
    return 0;
 }
 