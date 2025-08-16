#include <stdio.h>

int main(int argc, char const *argv[]){
    int idade;

    printf("Qual a sua idade? ");
        scanf("%d", &idade);
    printf("\nSua idade é %d\n", idade);
    if (idade<13){
        printf("Você é criança");
    }else if (idade>=13 && idade<= 17){
        printf("Você é adolecente");
    }else if (idade>=18 && idade<= 59){
        printf("Você é adulto");
    }else if (idade>60){
        printf("Você é idoso");
    }else{
        printf("Idade não valida");
    }
    
    return 0;
}
