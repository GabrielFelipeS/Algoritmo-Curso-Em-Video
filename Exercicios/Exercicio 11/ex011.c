#include <stdio.h>


int main (void)
{
    int a = 0, b = 0, c = 0, delta = 0;
    printf("Digite o valor de A: ");
        scanf("%i", &a);
    printf("Digite o valor de B: ");
        scanf("%i", &b);
    printf("Digite o valor de C: ");
        scanf("%i", &c);
        
    delta = (b*b) - 4*a*c;
    
    printf("Delta é %i\n", delta);
}

