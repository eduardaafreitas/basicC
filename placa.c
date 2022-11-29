#include <stdio.h>

int main (){
    int temp; 
    int max = 92;

    for(temp = 25; temp <= max; temp++){
        if((temp >= 30) && (temp <= 40)){
            printf(" %d, Placa de vídeo ociosa \n", temp);
        }
        if((temp >= 60) && (temp <= 85)){
            printf(" %d, Placa sob carga \n", temp);
        }
        
        if(temp >= 92){
            printf(" %d, Temperatura crítica, desligando… \n", temp);
        }        
    }
    return 0;
}