#include <stdio.h>

int main(int argc, char const *argv[]) {

    int palpite, num;

    while (palpite != num)
    {
        /* code */
    }
    
    printf("Digite um palpite: ");
        scanf("%d", &palpite);
    
        if (palpite == num) {
            printf("Voce descobriu o seu segredo\n");
        }
        else if(palpite > num){
            printf("O numero é maior\n");
        } else if (palpite < num) {
            printf("O numero é menor\n");
        }


};