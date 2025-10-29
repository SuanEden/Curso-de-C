int main(int argc, char const *argv[]){

    float IMC, peso, altura;
    printf("\nDigite sua altura: ");
    scanf("%f", &altura);

    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    IMC = peso / (altura * altura); 

    printf("O calculo do seu IMC e %2.f", IMC);

    if (IMC < 18){
        printf("\n Abaixo do padrão");
    }
    else if(IMC >=18 && IMC < 25){
        printf("\nnormal");

    }
    else{
        printf("\nAcima do peso");
    }

    return 0;
}