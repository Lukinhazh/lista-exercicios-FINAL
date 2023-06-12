#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número:  ");
    scanf("%i", &num);
    printf("\n");

    for(int c = 0; c < 11; c++)
    {
        printf("%i x %i = %i\n", num, c, (num*c));
    }
    
    return 0;
}
