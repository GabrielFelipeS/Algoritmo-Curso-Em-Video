#include <stdio.h>

int main (void)
{
    float altura, peso, calculo;

    printf("Qual a sua altura? ");
        scanf("%f", &altura);

    printf("Qual é o seu peso? ");
        scanf("%f", &peso);

    calculo = peso/(altura * altura);

    int IMC = calculo <= 18.5? printf("Abaixo do peso") : calculo <= 25 ? printf("Peso ideal") : calculo <=30 ? printf("Obesidade") : printf("Obesidade morbida") ;
}

