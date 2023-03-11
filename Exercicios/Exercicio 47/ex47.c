#include <stdio.h>

int main (void)
{
    int soma = 0;
    for(int i = 6 ;i <= 100;i+=2){
        soma += i;
        
    }
    printf("%i", soma);
    
    soma = 0;
    for(int i = 500 ;i >= 0;i-=50){
        soma += i;
        
    }
    printf("\n%i", soma);
    
    soma = 0;
    int number = 0;
    for(int i = 0; i< 7 ;i++){
        printf("\nDigite o %iº número: ", i+1);
            scanf("%i", &number);
            soma += number;
    }
    printf("%i", soma);
}

