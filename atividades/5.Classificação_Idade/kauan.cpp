#include <stdio.h>

int main(int argc, char const *argv[]) {

    int age;

    printf("Qual a sua idade: ");
    scanf("%d",&age);

    if (age <= 12 )
    {
        printf("Você é uma criança\n");   
    } else if (age >= 13 && age <= 17) {
        printf("Você é um adolescente\n");
    } else if (age >= 18 && age <= 59) {
        printf("Você é um adulto\n");
    } else {
        printf("Você é um idoso\n");
    }

    return 0;
}