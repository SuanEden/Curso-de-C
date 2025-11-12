#include <stdio.h>

int main() {
    int numero, opcao;
    int i;

    printf("=== Menu de Tabuada ===\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Escolha o tipo de tabuada (1-4): ");
    scanf("%d", &opcao);

    printf("Informe o número para a tabuada: ");
    scanf("%d", &numero);

    printf("\n=== Tabuada do %d ===\n", numero);

    switch (opcao) {
        case 1: 
            for (i = 1; i <= 10; i++) {
                printf("%d + %d = %d\n", numero, i, numero + i);
            }
            break;
        case 2: 
            for (i = 1; i <= 10; i++) {
                printf("%d - %d = %d\n", numero, i, numero - i);
            }
            break;
        case 3: 
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
            break;
        case 4:
            for (i = 1; i <= 10; i++) {
                if (i != 0) {
                    printf("%d / %d = %.2f\n", numero, i, (float)numero / i);
                }
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}