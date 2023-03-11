#include <stdio.h>
#include <cs50.h>

int main (void)
{
     int comprimento, largura;
     printf("Comprimento: ");
          scanf("%i", &comprimento);
     printf("Largura: ");
          scanf("%i", &largura);

     int area = comprimento * largura;
     string terrenos = area > 500? "TERRENO VIP" : area > 100 ? "TERRENO MASTER" : "TERRANO POPULAR";
     printf("A aréa de %im^2 é clssificada como %s", area ,terrenos);
}


