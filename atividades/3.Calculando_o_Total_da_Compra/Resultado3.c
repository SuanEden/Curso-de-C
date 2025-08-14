#include <stdio.h>

int main(int argc, char const *argv[])
{
    char produto[30];
    int quantidade;
    float valor_p, valor_t, pagamento;
    

    printf("Produto comprado: ");
        scanf("%s", produto);
    printf("\nValor do produto: R$");
        scanf("%f", &valor_p);
    printf("\nQuantidade comprada: ");
        scanf("%d", &quantidade);

    printf("\nProduto comprado: %s\nValor do produto: R$%.2f\nQuantidade: %d\n", produto, valor_p, quantidade);
            
            valor_t = valor_p * quantidade;
    printf("\nresultudado = R$%.2f", valor_t );
    printf("\nQual é o valor a ser pago : R$");
        scanf("%f", &pagamento);
    printf("Seu troco é: %.2f\n", pagamento-valor_t);
    
            return 0;
}
