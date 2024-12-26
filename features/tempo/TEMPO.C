#include<stdio.h>
#include<stdlib.h>

void converterTempo(){
    double valor, segundos;
    int de, para;

    printf("Selecione o formato de tempo a ser convertido:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    printf("4 - Dias\n");
    scanf("%d", &de);

    printf("Selecione agora o formato para o qual quer converter:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    printf("4 - Dias\n");
    scanf("%d", &para);

    printf("Agora informe o valor a ser convertido:\n");
    scanf("%lf", &valor);

    if(de == 1){
        segundos = valor;
    } else if(de == 2){
        segundos = valor * 60;
    } else if(de == 3){
        segundos = valor * 3600;
    } else if(de == 4){
        segundos = valor * 86400;
    } else {
        printf("Opção inválida para o formato de entrada.\n");
        return;
    }

    if(para == 1){
        printf("Resultado: %.2f segundos\n", segundos);
    } else if(para == 2){
        printf("Resultado: %.2f minutos\n", segundos/60);
    } else if(para == 3){
        printf("Resultado: %.2f horas\n", segundos/3600);
    } else if(para == 4){
        printf("Resultado: %.2f dias\n", segundos/86400);
    } else {
        printf("Opção inválida para o formato de saída.\n");
    }
}

