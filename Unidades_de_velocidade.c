#include <stdio.h>

void vel();   // Função principal
void menu1(); // Menu de escolha
void select1(int A);
// Conversão de unidades
float kphToMps(float kph);
float kphToMph(float kph);
float mpsToKph(float mps);
float mphToKph(float mph);

void vel()
{
    int A = 0;
    menu1();
    scanf("%d", &A);
    select1(A);
}
// Converte km/h para m/s
float kphToMps(float kph)
{
    return (kph / 3.6);
}
// Converte km/h para mph
float kphToMph(float kph)
{
    return (kph / 1.60934);
}
// Converte m/s para km/h
float mpsToKph(float mps)
{
    return (mps * 3.6);
}
float mphToKph(float mph)
{
    return (mph * 1.60934);
}

void menu1()
{
    printf("\n\n\tEscolha a unidade: \n");
    printf("1 - km/h \n");
    printf("2 - m/s \n");
    printf("3 - mph \n\n");
}

void select1(int A)
{
    float kph, mps, mph;
    switch (A)
    {
    case 1:
        printf("Digite o valor da velocidade em km/h: ");
        scanf("%f", &kph);
        mps = kphToMps(kph);
        mph = kphToMph(kph);
        printf("Resultado: \n");
        printf("km/h -- m/s -- mph\n");
        printf("%.2f km/h -- %.2f m/s -- %.2f mph\n", kph, mps, mph);
        break;
    case 2:
        printf("Digite o valor da velocidade em m/s: ");
        scanf("%f", &mps);
        kph = mpsToKph(mps);
        mph = kphToMph(kph);
        printf("Resultado: \n");
        printf("km/h -- m/s -- mph\n");
        printf("%.2f km/h -- %.2f m/s -- %.2f mph\n", kph, mps, mph);
        break;

    case 3:
        printf("Digite o valor da velocidade em mph: ");
        scanf("%f", &mph);
        kph = mphToKph(mph);
        mps = kphToMps(kph);
        printf("Resultado: \n");
        printf("km/h -- m/s -- mph\n");
        printf("%.2f km/h -- %.2f m/s -- %.2f mph\n", kph, mps, mph);
        break;

    default:
        printf("##Valor invalido. Por favor tente novamente.## \n\n");
        break;
    }
}
