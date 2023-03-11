#include <stdio.h>


int main (void)
{
    float velocidade, limite = 80, preco = 5;
    printf("Qual a velocidade do carro: ");
    scanf("%f", &velocidade);
    if(velocidade > limite)
    {
        float multa = (velocidade - 80) * preco;
        printf("O preço da multa é R$%.2f", multa);
    }
}

