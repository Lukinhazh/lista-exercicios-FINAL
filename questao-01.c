#include <stdio.h>

int main() 
{
    float r, d, comp, area;

    printf("Digite o raio da circunferência: ");
    scanf("%f", &r);

    d = 2 * r;

    comp = 2 * 3.1415926535897932384626433832795 * r;

    area = 3.1415926535897932384626433832795 * r * r;

    printf("Diâmetro: %.2f\n", d);
    printf("Comprimento: %.2f\n", comp);
    printf("Área: %.2f\n", area);

    return 0;
}
