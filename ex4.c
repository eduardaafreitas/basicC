#include <stdio.h>


int main(){
    int a, b, maior = 0;
    int *pointA, *pointB;
    printf("digite A: \n");
    scanf("%d", &a);    
    printf("digite B: \n");
    scanf("%d", &b);
    pointA = &a;
    pointB = &b;

    if (*pointA > *pointB)
        maior = *pointA;
    else
        maior = *pointB;

    printf(" Valor de A: %d \n Valor de B: %d \n O maior é: %d \n",  a, b, maior);

    return 0;
}