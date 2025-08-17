#include <stdio.h>

// Pede o peso do usuário
float obterPeso() {
    float peso;
    printf("Qual o seu peso (kg)? ");
    scanf("%f", &peso);
    return peso;
}

// Pede a altura do usuário
float obterAltura() {
    float altura;
    printf("Qual a sua altura (m)? ");
    scanf("%f", &altura);
    return altura;
}

// Calcula o IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}
/// Roda tudo
int main(void) {
    float peso = obterPeso();
    float altura = obterAltura();
    float imc = calcularIMC(peso, altura);

    printf("Peso: %.2f kg\nAltura: %.2f m\nIMC: %.2f\n", peso, altura, imc);

    return 0;
}
