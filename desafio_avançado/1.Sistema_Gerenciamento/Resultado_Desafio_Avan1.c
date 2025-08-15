#include <stdio.h>
#define ALUNOS 3
#define PROVAS 4

void coletaNotas(float notas[ALUNOS][PROVAS])
{
    int i, j, n = 1;
    for (i = 0; i < ALUNOS; i++)
    {
            printf("\nQuais as notas do aluno %d\n",i+1);
        for (j = 0; j < PROVAS; j++)
        {
            printf("Prova %d: ", n);
          scanf("%f", &notas[i][j]);
          n++;
        }
          printf("\n");
        n = 1;
    }
    return notas[ALUNOS][PROVAS];
}
void imprimiNotas(float notas[ALUNOS][PROVAS]){
int i , j, n;
    for (i = 0; i < ALUNOS; i++)
    {
       printf("\nAluno : %d \n", i+1);
        for (j = 0; j < PROVAS; j++)
        {
         printf("Nota da prova %d: %f\n",n, notas[i][j]);
         n++;
        }
        printf("\n");
        n=0;
    }

}
int main(int argc, char const *argv[])
{
    float notas[ALUNOS][PROVAS];
    coletaNotas(notas);
    imprimiNotas(notas);
   return 0;
}

