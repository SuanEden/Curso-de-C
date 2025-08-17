#include <stdio.h>

float obterPeso (){
    float peso;

    printf("Qual o seu peso? ");
    scanf("%f", &peso);
 
    return peso;
}

float obterAltura(){
    float altura;

    printf("Qual a sua altura?");
    scanf("%f", &altura);
    
    return altura;
}

float calcularIMC(float peso, float altura){
    return peso/(altura*altura);
}

 int main(int argc, char const *argv[])
 {
    float peso = obterPeso();
    float altura = obterAltura();
    float imc = calcularIMC(peso,altura);

    printf("%.2f %.2f %.2f",peso,altura,imc);
    
    return 0;
 }
 