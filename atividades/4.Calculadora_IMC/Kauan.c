#include <stdio.h>

int main(int argc, char const *argv[])
{
    float Peso, Altura, IMC;

    printf("Qual o seu Peso:");
    scanf("%f",&Peso);
    printf("Qual o seu Altura:");
    scanf("%f",&Altura);
    printf("IMC = %.2f:\n", Peso/(Altura * Altura));

    if (IMC < 24)
    {
        printf("Magro");
    } else if (IMC >= 25 && IMC <= 30) {
        printf("Saudavel");
    } else {
        printf("Sobre peso");
    }
    
    return 0;
}
