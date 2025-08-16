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
}
      float calcularMediaAluno(float notas[ALUNOS][PROVAS], float media[ALUNOS]){
          int  i, j;
          float media_t = 0.0f;
          
          for (i = 0; i < ALUNOS; i++)
          {
            media[i] = 0.0f;
            
            for ( j = 0; j < PROVAS; j++)
            {
              media[i] += notas[i][j];
              
            }
            media[i] = media[i] / PROVAS;
              
              media_t+=media[i];

            }
            media_t /= ALUNOS;
         
              printf("\n \n");

          return media_t;
      }

      void imprimiNotas(float notas[ALUNOS][PROVAS], float media[ALUNOS]){
      int i , j, n;
      float media_t = calcularMediaAluno(notas,media);
    for (i = 0; i < ALUNOS; i++)
    {
    
      n = 0;
       printf("\nAluno : %d \n", i+1);
       
        for (j = 0; j < PROVAS; j++)
        {
         printf("Nota da prova %d: %f\n",n, notas[i][j]);
         n++;
          
        }
              printf("\nMedia do Aluno %d: %f \n",i+1 ,media[i]);
        
    
    }
        printf("\n\n");
        for (i = 0; i < ALUNOS; i++)
    {
      printf("Media do Aluno %d: %f \n",i+1 ,media[i]);
    }
    printf("\nMedia da sala e: %f", media_t);

    }
    



    


int main(int argc, char const *argv[])
{
  
    float media[ALUNOS+1];
    float notas[ALUNOS][PROVAS];
    coletaNotas(notas);
    calcularMediaAluno(notas, media);
    imprimiNotas(notas, media);
    
    
   return 0;
}

