#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{

    int nota1 = 0, nota2 = 0;

    string nome = get_string("Nome do Aluno: ");

    printf("1º Nota do aluno: ");
    scanf("%i", &nota1);

    printf("2º Nota do aluno: ");
    scanf("%i", &nota2);

    float media = (nota1 + nota2) / 2 ;

    if(media >= 7)
    {
        printf("Teve aproveitamento\n");
    }
    else
    {
        printf("Não teve aproveitamento\n");
    }
    //nota1 = get_int("1º Nota do aluno: ");


   // nota2 = get_int("2º Nota do aluno: ");

}



