#include <stdio.h>

int main(int argc, char const *argv[]) {
    // Declaração de variáveis
    char produto[30];
    int quantidade;
    float valor_produto, valor_total, pagamento;
    
    // Entrada de dados
    printf("Produto comprado: ");
    scanf("%s", produto);

    printf("\nValor do produto: R$");
    scanf("%f", &valor_produto);

    printf("\nQuantidade comprada: ");
    scanf("%d", &quantidade);

    // Mostra os dados informados
    printf("\nProduto comprado: %s\nValor do produto: R$%.2f\nQuantidade: %d\n", 
           produto, valor_produto, quantidade);
            
    // Calcula valor total
    valor_total = valor_produto * quantidade;

    printf("\nValor total da compra: R$%.2f", valor_total);

    // Entrada do pagamento
    printf("\nQual é o valor a ser pago: R$");
    scanf("%f", &pagamento);

    // Calcula e mostra o troco
    printf("Seu troco é: R$%.2f\n", pagamento - valor_total);
    
    return 0;
}
