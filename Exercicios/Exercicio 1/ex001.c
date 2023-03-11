#include <stdio.h>
#include <cs50.h>

int main (void)
{

    printf("Olá Mundo!\n");
    string name = get_string("Qual é seu nome?\n");
    printf("Olá %s, é um prazer te conhecer!", name);
}