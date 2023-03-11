#include <stdio.h>


int main (void)
{
    int altura = 0, largura = 0, litro = 0;
    printf("Altura: ");
    scanf("%i", &altura);
    printf("Largura: ");
    scanf("%i", &largura);
    int area = altura * largura;
    do
    {
        litro++;
        area -=2;    
    }
    while(area >= 2);
    printf("precisamos de %i litros", litro);
}

