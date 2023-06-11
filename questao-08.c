#include <stdio.h>

int main()
{
    float preco1, preco2;
    
    printf("Digite o preço do produto:  ");
    scanf("%f", &preco1);
    
    preco2  = preco1 - ((preco1) * 9/100);
    
    printf("Preço original:  R$ %.2f\nCom desconto fica: R$%.2f", preco1, preco2);
    
}
