#include <stdio.h>

int main(){
    int m = 10;
    int n, o;
    int *point_p;
    int *point_z;
    
    point_p = &m;
    printf("endereço de M: %p \n", point_p);

    point_z = &m;
    printf("valor armazenado em Z: %p \n", point_z);
    printf("valor armazenado no endereço apontado por Z: %p \n", point_z);

    int *point_n = &n;
    printf("endereço de N: %p \n", point_n);

    point_n = &o;

    o = m;

    printf("endereço de Z: %p \n", point_z);

}