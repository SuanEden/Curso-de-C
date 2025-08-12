#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, tabuada;
        printf("Me informe um valor: ");
        scanf("%d", &numero);
    for ( tabuada = 0; tabuada <= 10; tabuada++)
    {
        printf("\n%d * %d = %d", numero, tabuada, numero*tabuada);
    }
    
    return 0;
}
