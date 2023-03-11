#include <stdio.h>


int main (void)
{
    int dias, km, total;
    printf("Quantos Km rodados? ");
        scanf("%i", &km);
    printf("Alugado por quantos dias? ");
        scanf("%i", &dias);
    
    total = (dias * 90) + (km * 0.20);
    
    printf("Total pago é %i", total);
}

