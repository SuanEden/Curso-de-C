#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Num,Operado;
    float Tabuada;
    printf("Me diga um numero: ");
    scanf("%d", &Num);
    printf(" \n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \nEscolha o operador:");
    scanf("%d",&Operado);
    for(Tabuada = 0; Tabuada <=10;Tabuada++){
        switch (Operado)
        {
        case 1:
        printf("\n%d + %2.f = %2.f",Num,Tabuada, Num+Tabuada);
        case 2:
        printf("\n%d - %2.f = %2.f",Num,Tabuada, Num-Tabuada);
        case 3:
        printf("\n%d * %2.f = %2.f",Num,Tabuada, Num*Tabuada);
        case 4:
        printf("\n%d / %2.f = %2.f",Tabuada,Num, Num/Tabuada);
        }
    }
    
    return 0;
}

