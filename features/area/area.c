#include <stdio.h>


double metroQuadradoParaCentimetro(double metroQuadrado) {
    return metroQuadrado * 10000; 
}

double centimetroParaMetroQuadrado(double centimetroQuadrado) {
    return centimetroQuadrado / 10000; 
}

// menu para chamar na main
void area() {
    int opcao;
    double valor;

    printf("\n--- Conversão de Área ---\n");
    printf("Escolha uma opção:\n");
    printf("1 - Metro quadrado para Centímetro quadrado\n");
    printf("2 - Centímetro quadrado para Metro quadrado\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em metros quadrados: ");
            scanf("%lf", &valor);
            printf("%.2f m² = %.2f cm²\n", valor, metroQuadradoParaCentimetro(valor));
            break;
        case 2:
            printf("Digite o valor em centímetros quadrados: ");
            scanf("%lf", &valor);
            printf("%.2f cm² = %.2f m²\n", valor, centimetroParaMetroQuadrado(valor));
            break;
        default:
            printf("Opção inválida. Por favor, tente novamente.\n");
            break;
    }
}
