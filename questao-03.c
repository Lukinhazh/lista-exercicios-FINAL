#include <stdio.h>

int main() 
{
    float m;
    float dm, cm, mm;

    printf("Digite um valor em metros: ");
    scanf("%f", &m);

    dm = m * 10;
    cm = m * 100;
    mm = m * 1000;

    printf("%.2f metros equivalem a %.2f decímetros\n", m, dm);
    printf("%.2f metros equivalem a %.2f centímetros\n", m, cm);
    printf("%.2f metros equivalem a %.2f milímetros\n", m, mm);

    return 0;
}
