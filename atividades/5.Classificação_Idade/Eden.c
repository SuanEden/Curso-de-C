#include <stdio.h>
int main(int argc, char const *argv[])
{
    int Age;
    printf("Qual a sua idade: ");
    scanf("%d",&Age);

    if (Age <= 12)
    {
        printf("Você é uma criança");
    }
    else if (Age >= 13  && Age <=17)
    {
        printf("Você é um adolecente");
    }
    else if (Age >=18 && Age <= 59)
    {
        printf("Você é um adulto");
    }else
    {
        printf("Você é um idoso");
    }   

    
    return 0;
}
