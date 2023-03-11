#include <stdio.h>


int main (void)
{
    float number1 = 0;
    printf("Digite uma distância em metros: ");
    scanf("%f", &number1);
    printf("A distancia de %f corresponte a:\n %.2fKm\t\t\t %.2fdm\n %.2fHm \t\t %.2fcm\n %.2fDam\t\t %.2fmm\n",number1, number1/1000, number1*10, number1/100, number1*100, number1/10, number1/1000);
}

//Brincando em C
//
//