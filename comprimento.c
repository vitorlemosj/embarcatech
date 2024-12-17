#include <stdio.h>

void menu() {
    printf("Escolha a unidade de comprimento de origem:\n");
    printf("1. Metro (m)\n");
    printf("2. Centímetro (cm)\n");
    printf("3. Milímetro (mm)\n");
}

double converter(double valor, int origem, int destino) {
    double metros;

    // Converte a unidade de origem para metros
    switch (origem) {
        case 1: metros = valor; 
            break; 
        case 2: metros = valor / 100; 
            break; 
        case 3: metros = valor / 1000; 
            break;
        default:
            printf("Unidade de origem inválida.\n");
            return -1;
    }

    // Converte de metros para a unidade de destino
    switch (destino) {
        case 1: 
            return metros; 
        case 2: 
            return metros * 100;
        case 3: 
            return metros * 1000;
        default:
            printf("Unidade de destino inválida.\n");
            return -1;
    }
}

int main() {
    double valor;
    int origem, destino;

    // Exibe o menu para o usuário escolher as unidades
    menu();

    printf("Digite o número da unidade de origem: ");
    scanf("%d", &origem);
    
    printf("Digite o número da unidade de destino: ");
    scanf("%d", &destino);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    double resultado = converter(valor, origem, destino);
    if (resultado != -1) {
        printf("\n%.2f unidades de origem equivale a %.2f unidades de destino.\n", valor, resultado);
    }

    return 0;
}
