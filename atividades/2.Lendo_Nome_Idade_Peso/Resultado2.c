#include <stdio.h>

int main(int argc, char const *argv[]){
    char nome[30];
    int idade;
    float altura;

    printf("Qual o seu nome: ");
        scanf("%s", nome);
    printf("Qual a sua idade: ");
        scanf("%d", &idade);
    printf("Qual a sua altura: ");
        scanf("%f", &altura);
    printf("\nSeu nome é: %s\nSua idade é: %d\nSua altura é %.2f\n",nome,idade, altura);
        
    return 0;
}