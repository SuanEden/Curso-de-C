#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome[30];

    int idade;

    float altura;


    printf("Digite seu nome: \n");
        scanf("%s", nome);

    printf("Digite sua idade: \n");
        scanf("%d", &idade);

    printf("Digite seu altura: \n");
        scanf("%f", &altura);

    printf("Seu nome é %s \n Sua idade é %d \n Sua altura %.2f \n", nome, idade, altura);

    return 0;
}
