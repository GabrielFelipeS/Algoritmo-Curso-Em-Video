#include <stdio.h>
#include <cs50.h>

int main (void)
{
     int salario, anos_servico;
     string name = get_string("Nome do funcionario: ");
     printf("Salário: ");
          scanf("%i", &salario);
     printf("Anos de servico: ");
          scanf("%i", &anos_servico);
          
     salario += anos_servico > 10? (salario * 20)/100 : anos_servico > 3 ? (salario * 12.5)/100 : (salario * 3)/100;
     printf("O novo salario de %s é de %i pelos seus %i anos de serviço", name, salario, anos_servico);
}


