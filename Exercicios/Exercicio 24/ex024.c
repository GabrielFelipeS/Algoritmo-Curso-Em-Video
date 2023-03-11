#include <stdio.h>

int main (void)
{
    float distancia;
    printf("Qual a distancia? ");
    scanf("%f", &distancia);
    float preco = distancia <= 200? 0.50 * distancia : 0.45*distancia;
    printf("O preço a se pagar é R$%.2f ", preco);
}


