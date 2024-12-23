#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void converterTempo(double valor, int de, int para){
    double segundos;

    if(de == 1){
        segundos = valor;
    }else{
        if(de == 2){
            segundos = valor * 60;
        }else{
            if(de == 3){
                segundos = valor * 3600;
            }else{
                if(de == 4){
                    segundos = valor * 86400;
                }
            }
        }
    }

    if(para == 1){
        printf("Resultado: %.2f segundos", segundos);
    }else{
        if(para == 2){
            printf("Resultado: %.2f minutos", segundos/60);
        }else{
            if(para == 3){
                printf("Resultado: %.2f horas", segundos/3600);
            }else{
                if(para == 4){
                    printf("Resultado: %.2f dias", segundos/86400);
                }
            }
        }
    }
}

int main(){
    double valor;
    int de, para;

    printf("Selecione o formato de tempo a ser convertido:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    printf("4 - Dias\n");
    scanf("%d", &de);

    printf("Selecione agora o formata para o qual quer converter:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    printf("4 - Dias\n");
    scanf("%d", &para);

    printf("Agora informe o valor a ser convertido:\n");
    scanf("%lf", &valor);

    converterTempo(valor, de, para);

    return 0;
}