#include <stdio.h>

int main (void)
{
    int valor1 = 0, valor2 = 0, incremento = 0;
    
    printf("Digite o primeiro valor: ");
        scanf("%i", &valor1);
        
    printf("\nDigite o último valor: ");
        scanf("%i", &valor2);
        
    printf("\nDigite o incremento: ");
        scanf("%i", &incremento);
        
        printf("\nContagem: ");
        if(valor1 < valor2){
            
            for(int i = valor1 ;i<=valor2 ; i+= incremento){
                printf("%i ", i);
            }
        }
        else{
            for(int i = valor1 ;i>=valor2 ; i-= incremento){
                printf("%i ", i);
            }
            }
            
        
        printf("Acabou!");
        
}

