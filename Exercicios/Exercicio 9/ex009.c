#include <stdio.h>


int main (void)
{
    float dinheiro = 0, dolar = 0;
    printf("Seu dinheiro: ");
    scanf("%f", &dinheiro);
    do
    {
        dolar++;
        dinheiro -= 3.45;
    }
    while(dinheiro >= 3.45);
    printf("Pode comprar até U$%.2f", dolar);
    
}

