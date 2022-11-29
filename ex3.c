#include <stdio.h>

int soma( int *a, int *b){
    int c;
    c = *a + *b;
    return c;
}


int main(){
    int a, b, s;

    printf("digite A: \n");
    scanf("%d", &a);    
    printf("digite B: \n");
    scanf("%d", &b);

    s = soma(&a, &b);

    printf("Valor de A: %d \nValor de B: %d \n  Soma: %d \n",  a, b, s);

    return 0;
}