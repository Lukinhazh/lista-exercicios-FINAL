#include <stdio.h>

int main()
{
    int mes;

    printf("Digite o número do mês: ");
    scanf("%i", &mes);

    switch (mes)
    {
        case 2:
            printf("\n28/29 dias\n");
            break;
        case 4:
            printf("\n30\n");
            break;
        case 6:
            printf("\n30\n");
            break;
        case 9:
            printf("\n30\n");
            break;
        case 11:
            printf("\n30\n");
            break;
        default :
            printf("\n31\n");
            break;
    }
    
    return 0;
}
