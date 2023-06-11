#include <stdio.h>

int main() 
{
    float t, v, d;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &t);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &v);

    d = t * v;

    printf("Distância percorrida foi de: %.2f km", d);

    return 0;
}
