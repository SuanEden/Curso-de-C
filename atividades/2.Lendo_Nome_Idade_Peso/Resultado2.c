#include <stdio.h>

// Programa que lê e exibe nome, idade e altura
int main(int argc, char const *argv[]) {
    // Declaração de variáveis
    char nome[30];
    int idade;
    float altura;

    // Entrada de dados
    printf("Qual o seu nome: "); 
    scanf("%s", nome);     // %s lê string (sem espaços)
    
    printf("Qual a sua idade: ");
    scanf("%d", &idade);   // %d lê inteiro
    
    printf("Qual a sua altura: ");
    scanf("%f", &altura);  // %f lê float

    // Saída de dados
    printf("\nSeu nome é: %s\nSua idade é: %d\nSua altura é: %.2f\n", nome, idade, altura);
        
    return 0; // encerra o programa
}
