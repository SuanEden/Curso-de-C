#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome[30];
    int idade;
    float peso;
    
    printf("Diga seu nome?\n");
        scanf("%s",nome);
    printf("Diga a sua idade?\n");
        scanf("%d", &idade);
    printf("Diga o sua altura?\n");
        scanf("%.2F", &peso);

    printf("Seu nome e %s \n Sua idade e %d \n Sua altura e %.2f",nome,idade,peso);

    return 0;
}
