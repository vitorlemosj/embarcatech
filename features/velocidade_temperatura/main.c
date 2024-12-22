#include <stdio.h>
#include <stdlib.h>
#include "Unidades_de_temperartura.c"
#include "Unidades_de_velocidade.c"

void temp();
void vel();
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
        case -1:
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
        printf("-1 - Para Sair \n\n");
}