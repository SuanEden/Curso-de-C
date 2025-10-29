#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Calculadora de IMC\n");
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc <= 17) {
        printf("Abaixo do peso\n");
    } else if (imc >= 25 && imc <= 30) {
        printf("Peso normal\n");
    } else if (imc >= 30) {
        printf("Sobrepeso\n");
    }

    return 0;

}