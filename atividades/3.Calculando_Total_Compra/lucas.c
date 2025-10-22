#include <stdio.h>

int main(int argc, char const *argv[]){
    char nome[30];
    float valor, calculo, pagamento, troco;
    int quantidade;
    

    printf("Digite o nome do produto: ");
        scanf("%s", nome);

    printf("Digite o valor do produto: ");
        scanf("%f", &valor);

    printf("Digite a quantidade do produto: ");
        scanf("%d", &quantidade);

    calculo = valor * quantidade;

    printf("O calculo do produto %s é %.2f ", nome ,calculo);

    printf("Qual o valor do pagamento? ");
        scanf("%f", &pagamento);
    
    

    if (pagamento > calculo){
        troco = pagamento - calculo;
       printf("Seu troco é: %.2f", troco);

    }else if (pagamento == calculo){
        printf("Sem troco.\n");
    }else{
        printf("Dinehiro insuficiente");
    } 
        
    
    
        

    return 0;
}