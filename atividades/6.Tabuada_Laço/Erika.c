#include <stdio.h>

int main() {
    int num;
    char operacao; 
    int i;

    printf("Digite um numero de 1 a 10: ");
    scanf("%d", &num);

    printf("\nDigite o tipo de operacao (+, -, *, /): ");
    scanf(" %c", &operacao); 

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