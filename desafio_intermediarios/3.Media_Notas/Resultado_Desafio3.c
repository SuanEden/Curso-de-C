#include <stdio.h>

int main(void) {
    float alunos[5];                 // notas dos 5 alunos
    float soma = 0, media;           // soma começa em 0
    float maior_nota = 0, menor_nota;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Qual a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i]);

        // inicializa maior e menor na primeira iteração
        if (i == 0) {
            maior_nota = menor_nota = alunos[i];
        } else {
            if (maior_nota < alunos[i]) maior_nota = alunos[i];
            if (menor_nota > alunos[i]) menor_nota = alunos[i];
        }

        soma += alunos[i]; // acumula para média
    }

    media = soma / 5;

    printf("\nMedia da turma: %.2f", media);
    printf("\nMaior nota: %.2f", maior_nota);
    printf("\nMenor nota: %.2f", menor_nota);

    return 0;
}
