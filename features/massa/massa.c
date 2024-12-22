#include <stdio.h>


double quiloParaGrama(double quilo) {
    return quilo * 1000;
}

double quiloParaTonelada(double quilo) {
    return quilo / 1000;
}

double gramaParaQuilo(double grama) {
    return grama / 1000;
}

double toneladaParaQuilo(double tonelada) {
    return tonelada * 1000;
}

// menu para a opção adequada ser escolhida.
void massa() {
    int opcao;
    double valor;

    printf("\n--- Conversão de Massa ---\n");
    printf("Escolha uma opção:\n");
    printf("1 - Quilo para Grama\n");
    printf("2 - Quilo para Tonelada\n");
    printf("3 - Grama para Quilo\n");
    printf("4 - Tonelada para Quilo\n");
    printf("Digite uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em quilos: ");
            scanf("%lf", &valor);
            printf("%.2f kg = %.2f g\n", valor, quiloParaGrama(valor));
            break;
        case 2:
            printf("Digite o valor em quilos: ");
            scanf("%lf", &valor);
            printf("%.2f kg = %.2f toneladas\n", valor, quiloParaTonelada(valor));
            break;
        case 3:
            printf("Digite o valor em gramas: ");
            scanf("%lf", &valor);
            printf("%.2f g = %.2f kg\n", valor, gramaParaQuilo(valor));
            break;
        case 4:
            printf("Digite o valor em toneladas: ");
            scanf("%lf", &valor);
            printf("%.2f toneladas = %.2f kg\n", valor, toneladaParaQuilo(valor));
            break;
        default:
            printf("Opção inválida. Por favor, tente novamente.\n");
            break;
    }
}
