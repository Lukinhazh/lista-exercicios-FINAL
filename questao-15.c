#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a sua idade:  ");
    scanf("%i", &idade);
    
    if(idade >= 10 && idade <= 14){
        printf("Infantil.");
    }
    else if(idade >= 15 && idade <= 17){
        printf("Juvenil.");
    }
    else if(idade >= 18 && idade <= 25){
        printf("Adulto.");
    }

    return 0;
}
