#include <stdio.h>

int main()
{
    int a = 1;
    float n1, n2, n3, n4;

    float soma = 0;
    float media = 0;
    float mediatotal;


    while(a <= 5){

        printf("\nDigite a 1° nota do aluno:   ");
        scanf("%f", &n1);

        printf("Digite a 2° nota do aluno:   ");
        scanf("%f", &n2);

        printf("Digite a 3° nota do aluno:   ");
        scanf("%f", &n3);

        printf("Digite a 4° nota do aluno:   ");
        scanf("%f", &n4);

        media = ((3*n1)+(2*n2)+n3+n4)/4;

        soma += media;

        printf("Média do aluno:  %.2f\n", media);

        if(media >= 6)
        {
            printf("  Aluno aprovado!\n");
        }else
        {
            printf("\nAluno de Recuperação!\nnota necessária para passar: %.2f\n", (10 - media));
        }

        a++;
    }

    mediatotal = soma / 5;

    printf("\nMédia total da turma: %.2f", mediatotal);

    return 0;
}
