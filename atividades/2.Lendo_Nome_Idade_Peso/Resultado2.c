#include <stdio.h>

int main(int argc, char const *argv[]){
    ///Crie variaveis descritivas
    char nome[30];
    int idade;
    float altura;

    printf("Qual o seu nome: "); 
        scanf("%s", nome);  /// %s ler String
    printf("Qual a sua idade: ");
        scanf("%d", &idade);    /// %d ler Inteiro 
    printf("Qual a sua altura: ");
        scanf("%f", &altura);   /// %f ler Float
    printf("\nSeu nome é: %s\nSua idade é: %d\nSua altura é %.2f\n",nome,idade, altura);
        
    return 0;
}