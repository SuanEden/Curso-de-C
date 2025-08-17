#include <stdio.h>
#define ALUNOS 3
#define PROVAS 4

void preencherNotas(float notas[ALUNOS][PROVAS], int i, int j){
  for (i = 0; i < ALUNOS; i++){
    printf("\nQuais as notas do aluno %d\n",i+1);
    for (j = 0; j < PROVAS; j++){
      printf("Prova %d: ", j+1);
      scanf("%f", &notas[i][j]);
    }
    printf("\n");
  }
}

float calcularMediaAluno(float notas[ALUNOS][PROVAS], float media[ALUNOS], int i, int j){
  float media_t = 0.0f;

  for (i = 0; i < ALUNOS; i++){
    media[i] = 0.0f;
    for (j = 0; j < PROVAS; j++){
      media[i] += notas[i][j];
    }
    media[i] /= PROVAS;
    media_t+=media[i];
  }
  media_t /= ALUNOS;

  printf("\n \n");

  return media_t;
}

void exibirResultados(float notas[ALUNOS][PROVAS], float media[ALUNOS], float media_t, int i, int j){
  for (i = 0; i < ALUNOS; i++){
    printf("\nAluno : %d \n", i+1);
    for (j = 0; j < PROVAS; j++){
      printf("Nota da prova %d: %f\n",j+1, notas[i][j]);
    }
  printf("\nMedia do Aluno %d: %f \n",i+1 ,media[i]);
  }
  printf("\n\n");
  for (i = 0; i < ALUNOS; i++){
    printf("Media do Aluno %d: %f \n",i+1 ,media[i]);
  }
  printf("\nMedia da sala e: %f", media_t);
}
  
int main(int argc, char const *argv[]){
  int i, j;
  float media[ALUNOS];
  float notas[ALUNOS][PROVAS];
    preencherNotas(notas, i, j);
    calcularMediaAluno(notas, media, i, j);
    float media_t = calcularMediaAluno(notas, media, i, j );
    exibirResultados(notas, media, media_t, i, j);

  return 0;
}

