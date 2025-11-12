#include <stdio.h>

int main() {
    int num;
    // 'operacao' agora é um único caractere
    char operacao; 
    int i; // Declarando 'i' no escopo principal

    printf("Digite um numero de 1 a 10: ");
    scanf("%d", &num);

    printf("\nDigite o tipo de operacao (+, -, *, /): ");
    // Escaneia um único caractere
    scanf(" %c", &operacao); 

    // O switch agora compara o caractere lido
    switch (operacao) {
        case '+':
            for (i = 1; i <= 10; i++) {
                printf("%d + %d = %d\n", num, i, num + i);
            }
            break;
        case '-':
            for (i = 1; i <= 10; i++) {
                printf("%d - %d = %d\n", num, i, num - i);
            }
            break;
        case '*': 
            for (i = 1; i <= 10; i++) {
                printf("%d * %d = %d\n", num, i, num * i);
            }
            break;
        case '/': 
            for (i = 1; i <= 10; i++) {
                printf("%d / %d = %d\n", num, i, num / i);
            }
            break;
        default:
            printf("Operacao invalida!\n");
            break;
    }
    return 0;
}