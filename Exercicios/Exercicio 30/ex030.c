#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int seg[3];
    for(int i = 0; i <= 2;i++ ){
       printf("Escreva o %iº segmento de reta: ", i+1);
        scanf("%i", &seg[i]);
    }
  bool teste = ((seg[0] + seg[1] > seg[2]) && (seg[0] + seg[2] > seg[1]) && (seg[1] + seg[2] > seg[0])) ? true  : false;
  if(teste == true)
  {
       printf("É possivel montar um triangulo, ele é ");
       int triangulo = (seg[0] == seg[1]) && (seg[1] == seg[2])?  printf("EQUILÁTERO\n") : (seg[0] == seg[1] || seg[1] == seg[2])? printf("ISÓSCELES\n") : printf("ESCALENO\n") ;
       return 0;
  }
  printf("Não é possivel montar um triangulo");
}



