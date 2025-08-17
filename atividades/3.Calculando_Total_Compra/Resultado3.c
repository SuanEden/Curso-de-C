#include <stdio.h>

int main(int argc, char const *argv[]){
    char produto[30];
    int quantidade;
    float valor_produto, valor_total, pagamento;
    
    printf("Produto comprado: ");
        scanf("%s", produto);
    printf("\nValor do produto: R$");
        scanf("%f", &valor_produto);
    printf("\nQuantidade comprada: ");
        scanf("%d", &quantidade);
    printf("\nProduto comprado: %s\nValor do produto: R$%.2f\nQuantidade: %d\n", produto, valor_produto, quantidade);
            
    ///Calcula Valor total da compra
    valor_total = valor_produto * quantidade;

    printf("\nresultudado = R$%.2f", valor_total );
    printf("\nQual é o valor a ser pago : R$");
        scanf("%f", &pagamento);
    printf("Seu troco é: %.2f\n", pagamento - valor_total); ///Calcula o trouco quando imprimir
    
    return 0;
}
