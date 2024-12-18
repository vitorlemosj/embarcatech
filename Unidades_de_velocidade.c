#include <stdio.h>

void menu1();
void select1(int A);

void vel(){
    int A = 0;
    menu1();
    scanf("%d", &A);
    select1(A);

}


void menu1() {
    printf("\n\n\tEscolha a unidade: \n");
    printf("1 - km/h \n");
    printf("2 - m/s \n");
    printf("3 - mph \n\n");
}

void select1(int A){
    float kph, mps, mph;
    switch (A)
    {
    case 1:
        printf("Digite o valor da velocidade em km/h: ");
        scanf("%f", &kph);
        mps = kph / 3.6;
        mph = kph / 1.60934;
        printf("Resultado: \n");
        printf("km/h -- m/s -- mph\n");
        printf("%.2f km/h -- %.2f m/s -- %.2f mph\n", kph, mps, mph);
        break;
    case 2:
        printf("Digite o valor da velocidade em m/s: ");
        scanf("%f", &mps);
        kph = mps * 3.6;
        mph = kph / 1.60934;
        printf("Resultado: \n");
        printf("km/h -- m/s -- mph\n");
        printf("%.2f km/h -- %.2f m/s -- %.2f mph\n", kph, mps, mph);
        break;

    case 3:
        printf("Digite o valor da velocidade em mph: ");
        scanf("%f", &mph);
        kph = mph *  1.60934;
        mps = kph / 3.6;
        printf("Resultado: \n");
        printf("km/h -- m/s -- mph\n");
        printf("%.2f km/h -- %.2f m/s -- %.2f mph\n", kph, mps, mph);
        break;

    default:
    printf("##Valor invalido. Por favor tente novamente.## \n\n");
        break;
    }
}
