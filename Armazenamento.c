#include <stdio.h>
#include <string.h>

// Mapeamento das unidades em relação aos Bytes
#define BITS_TO_BYTES 1.0 / 8
#define BYTES_TO_KB 1024.0
#define BYTES_TO_MB 1024.0 * 1024
#define BYTES_TO_GB 1024.0 * 1024 * 1024
#define BYTES_TO_TB 1024.0 * 1024 * 1024 * 1024

void converterArmazenamento() {
    double value, result;
    char fromUnit[10], toUnit[10];

    printf("Conversor de grandezas de armazenamento\n");
    printf("Unidades disponíveis: Bits, Bytes, KB, MB, GB, TB\n");

    // Entrada do valor e unidades
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &value);
    printf("Digite a unidade de origem (Bits, Bytes, KB, MB, GB, TB): ");
    scanf("%s", fromUnit);
    printf("Digite a unidade de destino (Bits, Bytes, KB, MB, GB, TB): ");
    scanf("%s", toUnit);

    // Conversão para Bytes
    if (strcasecmp(fromUnit, "Bits") == 0) {
        value *= BITS_TO_BYTES;
    } else if (strcasecmp(fromUnit, "Bytes") == 0) {
        value *= 1; // já está em Bytes
    } else if (strcasecmp(fromUnit, "KB") == 0) {
        value *= BYTES_TO_KB;
    } else if (strcasecmp(fromUnit, "MB") == 0) {
        value *= BYTES_TO_MB;
    } else if (strcasecmp(fromUnit, "GB") == 0) {
        value *= BYTES_TO_GB;
    } else if (strcasecmp(fromUnit, "TB") == 0) {
        value *= BYTES_TO_TB;
    } else {
        printf("Unidade de origem inválida!\n");
        return;
    }

    // Conversão para a unidade de destino
    if (strcasecmp(toUnit, "Bits") == 0) {
        result = value / BITS_TO_BYTES;
    } else if (strcasecmp(toUnit, "Bytes") == 0) {
        result = value; // já está em Bytes
    } else if (strcasecmp(toUnit, "KB") == 0) {
        result = value / BYTES_TO_KB;
    } else if (strcasecmp(toUnit, "MB") == 0) {
        result = value / BYTES_TO_MB;
    } else if (strcasecmp(toUnit, "GB") == 0) {
        result = value / BYTES_TO_GB;
    } else if (strcasecmp(toUnit, "TB") == 0) {
        result = value / BYTES_TO_TB;
    } else {
        printf("Unidade de destino inválida!\n");
        return;
    }

    // Exibir o resultado
    printf("\n%.2lf %s = %.2lf %s\n", value, fromUnit, result, toUnit);
}

int main() {
    int continuar = 1;

    printf("Bem-vindo ao conversor de unidades de armazenamento!\n");

    while (continuar) {
        converterArmazenamento();

        printf("\nDeseja realizar outra conversão? (1 para Sim, 0 para Não): ");
        scanf("%d", &continuar);
    }

    printf("Programa encerrado. Até a próxima!\n");
    return 0;
}
