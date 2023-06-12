#include <stdio.h>

int main()
{
    int num, x;
    
    printf("Digite um número: ");
    scanf("%i", &num);
    
    
    printf("\nÉ divisível por: ");
    
    if((num % 2) == 0)
    {
        printf(" 2 ");
        x++;
    }
  
    if((num % 5) == 0)
    {
        printf(" 5 ");
        x++;
        
    }
  
    if((num % 10) == 0)
    {
        printf(" 10 ");
        x++;
    }
  
    if(x == 0)
    {
        printf("Nenhum desses.");
    }

    return 0;
}
