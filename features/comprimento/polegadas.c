#include <stdio.h>

void pol();

void pol()
{
    char pol[10][10] = {
        "1/2\"", "3/4\"", "1\"", "1.1/4\"", "1.1/2\"",
        "2\"", "2.1/2\"", "3\"", "4\"", "6\""};
    int mm[10] = {20, 25, 32, 40, 50, 60, 75, 85, 110, 160}, sv;
    float cm;

    printf("\nDigite o valor em mm: ");
    scanf("%f", &cm);

    if (cm <= mm[0])
    {
        printf("A bitoloa mais próxima é: %s\n\n", pol[0]);
    }
    else if (cm >= mm[9])
    {
        printf("A bitoloa mais próxima é: %s\n\n", pol[9]);
    }
    else
    {
        for (int i = 0; cm > mm[i]; i++)
        {
            sv = i;
        }
        printf("As bitolas mais próximas são: %s (%d mm) e %s (%d mm)\n\n", pol[sv], mm[sv], pol[sv + 1], mm[sv + 1]);
    }

    printf("Pressione qualquer tecla para continuar\n");
    getchar();
    getchar();
    // system("\npause");
}