
//Os comentarios aqui tem a função de ajudar a manter o padrão do código para futuras branches
#include <stdio.h>
#include <stdlib.h>
//Faça uma pasta com a nova funcionalidade e adicione o código aqui
#include "features/velocidade_temperatura/Unidades_de_temperartura.c"
#include "features/velocidade_temperatura/Unidades_de_velocidade.c"
#include "features/comprimento/comprimento.c"
#include "features/volume/volume.c"
#include "features/massa/massa.c"
#include "features/area/area.c"

void menu();
int seletor();

//A função principal consiste em um menu.
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
        /*Adcione mais case para adicionar sua nova funcionalidade
        O padrão consiste em:

        função desenvolvida
        printf("Executado com sucesso.\n\n");
        break;*/
        
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
        case 6:
            area();  
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


//Adicione a sua conversão aqui
void menu(){
    printf("\n\n\tEscolha a conversão: \n");
    printf("1 - Velocidade \n");
    printf("2 - Temperatura \n");
    printf("3 - Comprimento \n");
    printf("4 - Volume \n");
    printf("5 - Massa \n"); 
    printf("6 - Área \n");
    printf("0 - Para Sair \n\n");
}
//Este é apenas um modelo, segestões para melhorias podem ser feitas na parte issues no Github
