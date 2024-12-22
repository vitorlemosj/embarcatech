#include <stdio.h>
#include <stdlib.h>
#include "features/velocidade_temperatura/Unidades_de_temperartura.c"
#include "features/velocidade_temperatura/Unidades_de_velocidade.c"
#include "features/comprimento/comprimento.c"
#include "features/volume/volume.c"
#include "features/massa/massa.c"


void temp();
void vel();
void comp();
void menu();

int main()
{
    system("chcp 65001>null"); // Para utilizar acentos no print
    int A = 0;
    while (1)
    {
        menu();  // Exibe o menu para o usuário escolher as unidades
        scanf("%d", &A);

        switch (A)
        {
        case 1:
            vel();
            printf("Executado com sucesso.\n\n");
            break;
        case 2:
            temp();
            printf("Executado com sucesso.\n\n");
            break;
        case 3:
            comp();
            printf("Executado com sucesso.\n\n");
            break;
        case 4:
            vol();
            printf("Executado com sucesso.\n\n");
            break;   
        case 5:
            massa();  
            printf("Executado com sucesso.\n\n");
            break; 
        case 0:
            printf("Executado com sucesso.\n\n");
            return 0;
        default:
            printf("##Valor invalido. Por favor digite novamente.## \n\n");
            break;
        }
    }
}

void menu(){
    printf("\n\n\tEscolha a conversão: \n");
    printf("1 - Velocidade \n");
    printf("2 - Temperatura \n");
    printf("3 - Comprimento \n");
    printf("4 - Volume \n");
    printf("5 - Massa \n"); 
    printf("0 - Para Sair \n\n");
}
