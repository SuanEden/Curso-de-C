#include <stdio.h>

int main(int argc, char const *argv[])
{
    float Valor;
    int Qts;
    char Produto[30];

    printf("Qual o produto que você quer?");
        scanf("%s", Produto);
    printf("Qual o valor do produto?");
        scanf("%f", &Valor);
    printf("Qual a quantidade quer levar?");
        scanf("%d", &Qts);

printf("Produto: %s \n Valor: %.2f\n, Quantidade: %d\n Valor total: %.2f",Produto,Valor,Qts,Qts*Valor);


    
    return 0;
}
