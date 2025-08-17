#include <stdio.h>

int main(int argc, char const *argv[]) {
    // Declaração de variável
    int idade;

    // Entrada de dados
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    // Saída inicial
    printf("\nSua idade é %d\n", idade);

    // Estruturas condicionais para classificar a idade
    if (idade < 13) {
        printf("Você é criança");
    } else if (idade >= 13 && idade <= 17) { // && equivale a "E"
        printf("Você é adolescente");
    } else if (idade >= 18 && idade <= 59) {
        printf("Você é adulto");
    } else if (idade >= 60) {
        printf("Você é idoso");
    } else {
        printf("Idade não válida");
    }
    
    return 0;
}
