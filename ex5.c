#include <stdio.h>


int main(){
    int n;
    int v[n];
    int *pointV;

    printf("digite o tamanho desejado para o vetor: \n");
    scanf("%d", &n);    
    printf("preencha o vetor: \n");

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    pointV = &v[0];

    printf("Seu vetor é: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", *pointV);
        pointV++;
    }

    return 0;
}