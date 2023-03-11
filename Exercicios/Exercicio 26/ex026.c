#include <stdio.h>
#include <cs50.h>

int main (void)
{
     int n1, n2;
     printf("Escreva um número inteiro: ");
          scanf("%i", &n1);
     printf("Escreva outro número inteiro: ");
          scanf("%i", &n2);

     if(n1 > n2)
          printf("O primeiro número é maior\n");

     else if(n2 > n1)
          printf("O segundo número é maior\n");

     else if(n1 == n2)
          printf("Não existe valor maior ambos são iguais\n");
}


