#include <stdio.h>

int main(int argc, char const *args[]) {

    char nome[30];
    int idade;
    float peso;

    printf("diga seu nome?\n");
        scanf("%s",nome);
    printf("diga sua idade?\n");
        scanf("%d", &idade);
    printf("diga a sua altura?\n");
        scanf("%.2f", &peso);

    printf("Seu nome e %s, \n Sua idade e %d, \n Sua altura e %f",nome,idade,peso);
    return 0;
}