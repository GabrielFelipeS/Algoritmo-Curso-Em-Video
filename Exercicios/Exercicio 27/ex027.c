#include <stdio.h>
#include <cs50.h>

int main (void)
{
     int n1, n2;
     printf("Escreva a 1º nota: ");
          scanf("%i", &n1);
     printf("Escreva a 2º nota: ");
          scanf("%i", &n2);

     string media = (n1 + n2)/2 >= 7? "APROVADO" : (n1 + n2)/2 >= 5? "de\tRecuperação" : "Reprovado";
     printf("O aluno esta %s", media);
}


