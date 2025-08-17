#include <stdio.h>

int main(int argc, char const *argv[]){
    int numero, tabuada, operadores;

    printf("Me diga um valor: ");
        scanf("%d", &numero);
    printf("Qual a operador que você quer usar? ");
    printf("\n1 - Adicao\n2 - Substracao\n3 - Mutiplicacao\n4 - Divisao\n");
        scanf("%d", &operadores);

    switch (operadores){ ///break - Finaliza codigo
        case 1:
            for ( tabuada = 0; tabuada <= 10; tabuada++){
                printf("\n%d + %d = %d", numero, tabuada, numero+tabuada);
            }
            break;
        case 2:
            for ( tabuada = 0; tabuada <= 10; tabuada++){
                printf("\n%d - %d = %d", numero, tabuada, numero-tabuada);
            }
            break;
        case 3:
            for ( tabuada = 0; tabuada <= 10; tabuada++){
                printf("\n%d * %d = %d", numero, tabuada, numero*tabuada);
            }
            break; 
        case 4:
            for ( tabuada = 0; tabuada <= 10; tabuada++){
                printf("\n%d / %d = %.2f", numero, tabuada, (float)numero / tabuada);
            }
            break;    
        default: ///Nem uma das opções
            printf("Numero invalido");
            break;
    }

    return 0;
}
