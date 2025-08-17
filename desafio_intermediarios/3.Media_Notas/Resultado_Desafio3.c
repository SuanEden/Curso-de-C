#include <stdio.h>

int main(int argc, char const *argv[])
{
    float alunos[5];
    float soma, media; 
    float  maior_nota = 0, menor_nota ;
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Qual o nota do aluno %d: ", i+1);
            scanf("%f", &alunos[i]);
        if (i == 0){
            maior_nota = menor_nota = alunos [i];
        }else{
            if(maior_nota < alunos[i]) maior_nota = alunos[i];
            if(menor_nota > alunos[i]) menor_nota = alunos[i];
        }
        
        soma +=alunos[i];
    }
        media = soma / 5;

    printf("\nMedia da turma e: %.2f", media);
    printf("\nMaior nota da turma e: %.2f", maior_nota);
    printf("\nMenor nota da turma e: %.2f", menor_nota);
    
    return 0;
}
