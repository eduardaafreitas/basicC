#include <stdio.h>


int main(){
    int a, b, c;
    int *pointA, *pointB;
    printf("digite A: \n");
    scanf("%d", &a);    
    printf("digite B: \n");
    scanf("%d", &b);
    pointA = &a;
    pointB = &b;

    c = *pointA + *pointB;

    printf("Valor de A: %d | Valor de B: %d \n Soma: %d \n",  a, b, c);

    return 0;
}