#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num,operador; 
    float tabuada;

    printf("Me diga um numero: ");
    scanf("%d", & num);
    printf("Escolha um operadoer: \n1 - Soma, \n2 - Subtração, \n3 - Multiplicação, \n4 - Divisão\n");
    scanf("%d", & operador);
    

    for(tabuada = 0; tabuada <= 10; tabuada++){
       switch (operador)
       {
        case 1:
            printf("\n%d + %2.f = %2.f", num, tabuada, num+tabuada);
            break;
        case 2:
            printf("\n%d - %2.f = %2.f", num, tabuada, num-tabuada);
            break;
        case 3:
            printf("\n%d x %2.f = %2.f", num, tabuada, num*tabuada);
            break;
        case 4:
            printf("\n%d / %2.f = %2.f", num, tabuada, num/tabuada);
            break;
       default:
        break;
       }
    }

    return 0;
}
