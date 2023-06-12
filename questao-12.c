#include <stdio.h>

int soma(int a, int b) 
{
    return a + b;
}

int subtracao(int a, int b) 
{
    return a - b;
}

int multiplicacao(int a, int b)
{
    return a * b;
}

float divisao(int a, int b) 
{
    return (float)a / b;
}

int main() 
{
    int num1, num2;
    int escolha;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Escolha a operação:\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    scanf("%d", &escolha);

    int resultado;

    switch (escolha) 
    {
        case 1:
            resultado = soma(num1, num2);
            printf("Soma: %d\n", resultado);
            break;
        case 2:
            resultado = subtracao(num1, num2);
            printf("Subtração: %d\n", resultado);
            break;
        case 3:
            resultado = multiplicacao(num1, num2);
            printf("Multiplicação: %d\n", resultado);
            break;
        case 4:
            if (num2 != 0) 
            {
                float resultado_divisao = divisao(num1, num2);
                printf("Divisão: %.2f\n", resultado_divisao);
            } else 
            {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
