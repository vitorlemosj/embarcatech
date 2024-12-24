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
    float x;
    // Converte a unidade de origem para metros
    switch (origem) {
         case 1:
            // Entrada em metros
            printf("Digite o valor em Metro: ");
            scanf("%f", &x);
            printf("Metro -- Centimetro -- Milimetro \n");
            printf("%.2f m -- %.2f cm -- %.2f mm\n", x, x*100.0, x*1000.0);
            break;
        
        case 2:
            // Entrada em centimetros
            printf("Digite o valor em Centimetro: ");
            scanf("%f", &x);
            printf("Metro -- Centimetro -- Milimetro \n");
            printf("%.2f m -- %.2f cm -- %.2f mm\n", x/100.0, x, x*10);
            break;

        case 3:
            // Entrada em milimetros
            printf("Digite o valor em Milimetro: ");
            scanf("%f", &x);
            printf("Metro -- Centimetro -- Milimetro \n");
            printf("%.4f m -- %.4f cm -- %.4f mm\n", x/1000.0, x/10.0, x);
            break;

            default:  
            printf("Unidade de destino invalida.\n");
            break;
    }
}