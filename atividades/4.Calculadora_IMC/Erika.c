#include <stdio.h>

int main(){
    float altura, peso, imc;

    
    printf("Digite a sua altura: ");
    scanf("%f",&altura);
    
    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    imc = peso / ( altura * altura);

    printf("Seu IMC é %f",imc);
    if( imc < 17 ){
        printf("Classificação do IMC: Magreza");
    }if else( imc > 30 ){
        printf("Classificação do IMC: Sobrepeso");
    }else{
        printf("Classificação do IMC: Saudável");
    }
}