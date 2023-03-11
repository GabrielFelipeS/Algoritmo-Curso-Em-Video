#include <stdio.h>
#include <math.h>

int main (void)
{
    float preco, promocao = 0;
    printf("Digite o preço: ");
        scanf("%f", &preco);

    promocao = preco - (preco * 0.05) ;
    
    printf("O preço promocional é %f", promocao);
}

