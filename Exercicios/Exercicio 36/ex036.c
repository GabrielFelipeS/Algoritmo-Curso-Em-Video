#include <stdio.h>

int main(void)
{
    int atividade, pontos = 0;
    printf("Quantas horas de atividade fisica? ");
        scanf("%i", &atividade);
    if(atividade >= 0 && atividade <= 10 )
    {
        pontos = atividade * 2;
    }
    else if(atividade <= 20)
    {
        pontos = atividade * 5;
    }
    else if(atividade > 20){
        pontos = atividade * 10;
    }
    else{
        printf("ERRO! insira um valor verdadeiro");
    }

    float reais = pontos * 0.05;

    printf("\nParabens você ganhou %.2f reais",reais);
    return 0;
}
