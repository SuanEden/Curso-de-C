#include <stdio.h>
int main(int argc, char const *argv[])
{
    float Peso, Altura, IMC;

    printf("Qual o seu Peso:");
    scanf("%f",&Peso);
    printf("Qual o seu Altura:");
    scanf("%f",&Altura);
    printf("IMC = %.2f:", Peso/(Altura * Altura));
    return 0;
}
