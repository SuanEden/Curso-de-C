#include <stdio.h>>

int main(){
    int idade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    while(idade<0 || idade>120){
        printf("\n Idade inválida. Digite novamente: ");
        scanf("%d", &idade);
    }
    if(idade>=0 && idade<=12){
        printf("Você se encontra na faixa etária: criança");
    }else if(idade>=13 && idade<=17){
        printf("Você se encontra na faixa etária: adolescente");
    }else if(idade>=18 && idade<=59){
        printf("Você se encontra na faixa etária: adulto");
    }else{
        printf("Você se encontra na faixa etária: idoso");
    }
}