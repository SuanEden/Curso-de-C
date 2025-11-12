#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Num,Operado;
    float Tabuda;
    printf("Me diga um numero: ");
    scanf("%d", &Num);
    printf(" \n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \nEscolha o operador:");
    scanf("%d",&Operado);
    for(Tabuda = 0; Tabuda <=10;Tabuda++){
        switch (Operado)
        {
        case 1:
        printf("\n%d + %2.f = %2.f",Num,Tabuda, Num+Tabuda);
        case 2:
        printf("\n%d - %2.f = %2.f",Num,Tabuda, Num-Tabuda);
        case 3:
        printf("\n%d * %2.f = %2.f",Num,Tabuda, Num*Tabuda);
        case 4:
        printf("\n%d / %2.f = %2.f",Tabuda,Num, Num/Tabuda);
        }
    }
    
    return 0;
}

