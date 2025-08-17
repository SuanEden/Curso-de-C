#include <stdio.h>
#define ALUNOS 3
#define PROVAS 4

// Lê as notas de todos os alunos
void preencherNotas(float notas[ALUNOS][PROVAS], int i, int j) {
  for (i = 0; i < ALUNOS; i++) {
    printf("\nQuais as notas do aluno %d\n", i + 1);
    for (j = 0; j < PROVAS; j++) {
      printf("Prova %d: ", j + 1);
      scanf("%f", &notas[i][j]);
    }
    printf("\n");
  }
}

// Calcula as médias dos alunos e retorna a média da turma
float calcularMediaAluno(float notas[ALUNOS][PROVAS], float media[ALUNOS], int i, int j) {
  float media_t = 0.0f;

  for (i = 0; i < ALUNOS; i++) {
    media[i] = 0.0f;
    for (j = 0; j < PROVAS; j++) {
      media[i] += notas[i][j];
    }
    media[i] /= PROVAS;
    media_t += media[i];
  }
  media_t /= ALUNOS;

  return media_t;
}

// Mostra notas, médias individuais e média da turma
void exibirResultados(float notas[ALUNOS][PROVAS], float media[ALUNOS], float media_t, int i, int j) {
  for (i = 0; i < ALUNOS; i++) {
    printf("\nAluno : %d \n", i + 1);
    for (j = 0; j < PROVAS; j++) {
      printf("Nota da prova %d: %.2f\n", j + 1, notas[i][j]);
    }
    printf("Media do Aluno %d: %.2f \n", i + 1, media[i]);
  }

  printf("\nMedia da sala: %.2f\n", media_t);
}

int main(int argc, char const *argv[]) {
  int i, j;
  float media[ALUNOS];
  float notas[ALUNOS][PROVAS];

  preencherNotas(notas, i, j);                    // entrada de dados
  float media_t = calcularMediaAluno(notas, media, i, j); // processamento
  exibirResultados(notas, media, media_t, i, j);  // saída

  return 0;
}
