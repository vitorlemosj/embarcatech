#include <stdio.h>

void sel2();//Menu de escolha
void comp();//Função principal
void conv(int origem);

void comp() {
    int origem = 0;
    sel2();
    scanf("%d", &origem);
    conv(origem);
}

void sel2() {
    printf("Escolha a unidade de comprimento:\n");
    printf("1. Metro (m)\n");
    printf("2. Centimetro (cm)\n");
    printf("3. Milimetro (mm)\n");
}


void conv(int origem) { //conversor 
    float metros,centimetros ,milimetros;
    // Converte a unidade de origem para metros
    switch (origem) {
         case 1:
            // Entrada em metros
            printf("Digite o valor em Metro: ");
            scanf("%f", &metros);
            centimetros = metros * 100;
            milimetros = metros * 1000;
            printf("Metro -- Centimetro -- Milimetro \n");
            printf("%.2f m -- %.2f cm -- %.2f mm\n", metros, centimetros, milimetros);
            break;
        
        case 2:
            // Entrada em centimetros
            printf("Digite o valor em Centimetro: ");
            scanf("%f", &centimetros);
            metros = centimetros / 100;
            milimetros = centimetros * 10;
            printf("Metro -- Centimetro -- Milimetro \n");
            printf("%.2f m -- %.2f cm -- %.2f mm\n", metros, centimetros, milimetros);
            break;

        case 3:
            // Entrada em milimetros
            printf("Digite o valor em Milimetro: ");
            scanf("%f", &milimetros);
            centimetros = milimetros / 10;
            metros = milimetros / 1000;
            printf("Metro -- Centimetro -- Milimetro \n");
            printf("%.2f m -- %.2f cm -- %.2f mm\n", metros, centimetros, milimetros);
            break;

            default:  
            printf("Unidade de destino invalida.\n");
            break;
    }
}