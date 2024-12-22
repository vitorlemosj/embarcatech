#include <stdio.h>

void vol() {
    printf("Conversor de Unidades de Volume\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1. Litros\n");
    printf("2. Mililitros\n");
    printf("3. Metros cúbicos\n");
    printf("Sua escolha (1-3): ");
}

void conversor(double val, int entrada, int saida) { //conversor
    double result;

    if (entrada == 1 && saida == 2) {
        result = val * 1000;
        printf("%.2f Litros = %.2f Mililitros\n", val, result);
    } else if (entrada == 1 && saida == 3) {
        result = val / 1000;
        printf("%.2f Litros = %.6f Metros cúbicos\n", val, result);
    } else if (entrada == 2 && saida == 1) {
        result = val / 1000;
        printf("%.2f Mililitros = %.2f Litros\n", val, result);
    } else if (entrada == 2 && saida == 3) {  
        result = val / 1000000;
        printf("%.2f Mililitros = %.6f Metros cúbicos\n", val, result);
    } else if (entrada == 3 && saida == 1) {  
        result = val * 1000;
        printf("%.6f Metros cúbicos = %.2f Litros\n", val, result);
    } else if (entrada == 3 && saida == 2) { 
        result = val * 1000000;
        printf("%.6f Metros cúbicos = %.2f Mililitros\n", val, result);
    } else {
        printf("Conversão inválida!\n");
    }
}

int seletor() { //main
    int entrada, saida;
    double val;

    vol();

    scanf("%d", &entrada);

    if (entrada < 1 || entrada > 3) {
        printf("Unidade de entrada inválida!\n");
        return 1;
    }

    printf("Digite o val a ser convertido: ");
    scanf("%lf", &val);

    printf("Escolha a unidade de saída:\n");
    printf("1. Litros\n");
    printf("2. Mililitros\n");
    printf("3. Metros cúbicos\n");
    printf("Sua escolha (1-3): ");
    scanf("%d", &saida);

    if (saida < 1 || saida > 3) {
        printf("Unidade de saída inválida!\n");
        return 1;
    }

    if (entrada == saida) {
        printf("Unidade de entrada e saída são iguais. Nenhuma conversão necessária.\n");
        return 0;
    }

    conversor(val, entrada, saida);

    return 0;
}
