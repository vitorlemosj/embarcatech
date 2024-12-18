#include <stdio.h>

void menu2();
void select2(int A);

void temp()
{
    int A = 0;
    menu2();
    scanf("%d", &A);
    select2(A);
}

void menu2() {
    printf("\n\n\tEscolha a unidade: \n");
    printf("1 - Celsius \n");
    printf("2 - Fahrenheit \n");
    printf("3 - Kelvin \n\n");
}

void select2(int A){
    float F, C, K;
    switch (A)
    {
    case 1:
        printf("Digite o valor da temperatura em Celsius: ");
        scanf("%f", &C);
        F = C * 9.0 / 5.0 + 32;
        K = C + 273.15;
        printf("Resultado: \n");
        printf("Celcius -- Fahrenheit -- Kelvin \n");
        printf("%.2f °C -- %.2f °F -- %.2f K\n", C, F, K);
        break;
    case 2:
        printf("Digite o valor da temperatura em Fahrenheit: ");
        scanf("%f", &F);
        C = (F - 32) * 5.0 / 9.0;
        K = C + 273.15;
        printf("Resultado: \n");
        printf("Celcius -- Fahrenheit -- Kelvin \n");
        printf("%.2f °C -- %.2f °F -- %.2f K\n", C, F, K);
        break;

    case 3:
        printf("Digite o valor da temperatura em Kelvin: ");
        scanf("%f", &K);
        C = K - 273.15;
        F = C * (9.0 / 5.0) + 32;
        printf("Resultado: \n");
        printf("Celcius -- Fahrenheit -- Kelvin \n");
        printf("%.2f °C -- %.2f °F -- %.2f K\n", C, F, K);
        break;

    default:
    printf("##Valor invalido. Por favor tente novamente.## \n\n");
        break;
    }
}
