#include <stdio.h>

int main()
{
    int n;
    float nota, media;
    float soma = 0;

    printf("\nQuantos alunos tem a sua sala?  ");
    scanf("%i", &n);

    for(int c = 0; c < n; c++){
        printf("Digite a nota do %i° aluno: ", c);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / n;

    printf("\nA média da turma é %.2f\n\n", media);

    return 0;
}
