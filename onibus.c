#include <stdio.h>

int verificaAssento(char onibus[13][4], int assento){
    int i, j; int cont = 0;
    for(i = 0; i < 13; i++){
        for(j = 0; j < 4; j++){                                     /*essa função verifica os assentos*/
            if((onibus[i][j] != 'X') && (cont == assento))
                return assento;
            cont++;
        }
    }
    return 0;
}

int reservarAssento(char onibus[13][4], int assento){
    int i, j; int cont = 0;
    for(i = 0; i < 13; i++){                                    /*essa função verifica se o assento pode ser reservado e reserva*/
        for(j = 0; j < 4; j++){                                      
            if((onibus[i][j] != 'X') && (cont == assento)){
                onibus[i][j] = 'X';
                return 1;
            }  
            cont++;           
        }
    }
    return 0;
}

void imprimeMatriz(char onibus[13][4]){
    int i, j;
    for(i = 0; i < 13; i++){                                    /*essa função imprime a matriz onibus*/
        for(j = 0; j < 4; j++){
            printf("[%c] ", onibus[i][j]);
        }
        printf("\n");
    }
    return;
}
    

int main() {

    printf("     Menu Inicial: \n");
    printf("Digite 1 para verificar se o assento está disponível. \n");             /*menu principal*/
    printf("Digite 2 para reservar o assento. \n");
    printf("Digite 3 para imprimir o mapa de assentos. \n");

    int escolha;
    int assento; int verificar, reservar;                    /*declaração de variáveis*/
    char onibus[13][4] = {};

    onibus[0][0] = 'X';                                        /*atribui X para as posições 0 e 49*/
    onibus[12][3] = 'X';

    scanf("%d", &escolha);
    while((escolha != 0)){                      
        switch(escolha){
        case 1:
            printf("Qual assento você deseja verificar? \n");
            scanf("%d", &assento);
            verificar = verificaAssento(onibus, assento);           /*caso 1: verifica o assento*/
            if(verificar == assento)
                printf(" Assento disponível!\n");
            else
                printf(" Assento Ocupado\n");
            break;

        case 2:
            printf("Qual assento você deseja reservar? \n");
            scanf("%d", &assento);
            while((assento == 0) || (assento == 49)){
                printf("Esse assento não pode ser reservado :( \n");
                scanf("%d", &assento);
            }
            reservar = reservarAssento(onibus, assento);                /*caso 2: verifica e reserva o assento*/
            if(reservar == 1)
                printf(" Assento reservado!\n");
            else
                printf(" Não foi possível reservar este assento :(\n");
            break;
        
        case 3:
            printf("Mapa de assentos atual: \n");
            imprimeMatriz(onibus);                              /*imprime o mapa de assentos atual*/
        
        }
        printf("\n     Menu Inicial: \n");
        printf("Digite 1 para verificar se o assento está disponível. \n");
        printf("Digite 2 para reservar o assento. \n");
        printf("Digite 3 para imprimir o mapa de assentos. \n");
        printf("Digite 0 para sair do programa. \n");
        scanf("%d", &escolha);
    }
    return 0;                
}