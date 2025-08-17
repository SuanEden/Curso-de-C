#include <stdio.h>

int main(int argc, char const *argv[]) {
    // Declaração de variáveis
    int numero, tabuada, operadores;

    // Entrada de dados
    printf("Me diga um valor: ");
    scanf("%d", &numero);

    printf("Qual operador você quer usar?");
    printf("\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &operadores);

    // Estrutura de seleção
    switch (operadores) {
        case 1: // Adição
            for (tabuada = 0; tabuada <= 10; tabuada++) {
                printf("\n%d + %d = %d", numero, tabuada, numero + tabuada);
            }
            break;

        case 2: // Subtração
            for (tabuada = 0; tabuada <= 10; tabuada++) {
                printf("\n%d - %d = %d", numero, tabuada, numero - tabuada);
            }
            break;

        case 3: // Multiplicação
            for (tabuada = 0; tabuada <= 10; tabuada++) {
                printf("\n%d * %d = %d", numero, tabuada, numero * tabuada);
            }
            break; 

        case 4: // Divisão
            for (tabuada = 1; tabuada <= 10; tabuada++) { // começa em 1 para evitar divisão por zero
                printf("\n%d / %d = %.2f", numero, tabuada, (float)numero / tabuada);
            }
            break;    

        default: // Nenhuma das opções
            printf("Número inválido");
            break;
    }

    return 0;
}
