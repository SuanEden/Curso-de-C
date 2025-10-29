#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Calculadora de IMC\n");
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

return 0;
}