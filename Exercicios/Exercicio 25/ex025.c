#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int seg[3];
    for(int i = 0; i <= 2;i++ ){
       printf("Escreva o %iº segmento de reta: ", i+1);
        scanf("%i", &seg[i]);
    }
  int teste = ((seg[0] + seg[1] > seg[2]) && (seg[0] + seg[2] > seg[1]) && (seg[1] + seg[2] > seg[0])) ?  printf("É possivel montar um triangulo") : printf("Não é possivel montar um triangulo");
}


