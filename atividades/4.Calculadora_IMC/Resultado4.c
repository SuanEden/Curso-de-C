#include <stdio.h>

int main(int argc, char const *argv[]) {
    // Declaração de variáveis
    float peso, altura;

    // Entrada de dados
    printf("Me informe a sua altura: ");
    scanf("%f", &altura);

    printf("\nMe informe o seu peso: ");
    scanf("%f", &peso);

    // Saída: calcula o IMC diretamente no printf
    printf("\nO seu IMC é: %.2f", peso / (altura * altura));
    
    return 0;
}
