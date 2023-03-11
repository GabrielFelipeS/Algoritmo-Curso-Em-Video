#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int contagem;
    for(int i = 6; i <= 11;i++){
        printf("%i ", i);
    }
    printf("Acabou!\n");
    
    for(int i = 10;i >=3;i--){
        printf("%i ", i);
    }
    printf("Acabou!\n");
    
    for(int i = 0;i <= 18;i+=3)
    {
        printf("%i ", i);
    }
    printf("Acabou!\n");
    
    printf("Digite um valor: ");
        scanf("%i", &contagem);
        
        for(int i = 0;i<=contagem;i++){
            printf("%i ", i);
        }
        printf("Acabou!");
    
}
