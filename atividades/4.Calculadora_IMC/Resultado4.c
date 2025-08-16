#include <stdio.h>

int main(int argc, char const *argv[]){
    float peso ,altura;

    printf("Me informe a sua altura: ");
        scanf("%f", &altura);
    printf("\nMe infome a seu peso: ");
        scanf("%f", &peso);
    printf("\nO seu IMC é: %.2f", peso/(altura*altura));
    
    return 0;
}
