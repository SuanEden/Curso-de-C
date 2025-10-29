#include <stdio.h>

int main(){
    float altura, peso, imc;

    
    printf("Digite a sua altura: ");
    scanf("%f",&altura);
    while(altura<0 || altura>2.5){
        printf("Altua invalida. Digite novamente: ");
        scanf("%f", &altura);
    }
    
    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    imc = peso / ( altura * altura);

    printf("Seu IMC é %f",imc);

}