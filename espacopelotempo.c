#include <stdio.h>
#include <stdlib.h>
#include "function_espacopelotempo.c"

int main(int argc, char const *argv[])
{
    double velocidade = 0.0;
    double tempo = 0.0;
    double aceleracao = 0.0;

    if (argc == 3 || argc == 4) {
        velocidade = atof(argv[1]);
        tempo = atof(argv[2]);
        if (argc == 4) {
            aceleracao = atof(argv[3]);
        }
    } else if (argc == 1) {
        printf("digite a velocidade: ");
        scanf("%lf", &velocidade);

        printf("digite o tempo: ");
        scanf("%lf", &tempo);

        printf("digite a aceleracao (ou 0): ");
        scanf("%lf", &aceleracao);
    } else {
        printf("digite o nome do programa seguido de 2 ou 3 argumentos\n");
        return 0;
    }

    double res = espacopelotempo(velocidade, tempo, aceleracao);

    printf("resultado: %f\n", res);
    printf("\nFeito por Benjamim Messias\n");

    FILE *arquivo = fopen("espacopelotempo.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "resultado: %f\n", res);
        fprintf(arquivo, "\nFeito por Benjamim Messias\n");
        fclose(arquivo);
    } else {
        printf("Erro ao criar o arquivo espacopelotempo.txt\n");
    }

    return 0;
}
