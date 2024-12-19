#include <stdio.h>

void temp();//Função principal
void menu2();//Menu de escolha
void select2(int A);
//Conversão de unidades
float CtoF(float C);
float CtoK(float C);
float FtoC(float F);
float KtoC(float K);


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

//Converte Celsius para Fahrenheit
float CtoF(float C){
    return (C * 9.0 / 5.0 + 32);
}
//Converte Celsius para Kevin
float CtoK(float C){
    return (C + 273.15);
}
//Converte Fahrenheit para Celsius
float FtoC(float F){
    return ((F - 32) * 5.0 / 9.0);
}
//Converte Kevin para Celsius
float KtoC(float K){
 return (K - 273.15);
}


void select2(int A){
    float F, C, K;
    switch (A)
    {
    case 1:
        printf("Digite o valor da temperatura em Celsius: ");
        scanf("%f", &C);
        F = CtoF(C);
        K = CtoK(C);
        printf("Resultado: \n");
        printf("Celcius -- Fahrenheit -- Kelvin \n");
        printf("%.2f °C -- %.2f °F -- %.2f K\n", C, F, K);
        break;
    case 2:
        printf("Digite o valor da temperatura em Fahrenheit: ");
        scanf("%f", &F);
        C = FtoC(F);
        K = CtoK(C);
        printf("Resultado: \n");
        printf("Celcius -- Fahrenheit -- Kelvin \n");
        printf("%.2f °C -- %.2f °F -- %.2f K\n", C, F, K);
        break;

    case 3:
        printf("Digite o valor da temperatura em Kelvin: ");
        scanf("%f", &K);
        C = KtoC(K);
        F = CtoF(C);
        printf("Resultado: \n");
        printf("Celcius -- Fahrenheit -- Kelvin \n");
        printf("%.2f °C -- %.2f °F -- %.2f K\n", C, F, K);
        break;

    default:
    printf("##Valor invalido. Por favor tente novamente.## \n\n");
        break;
    }
}
