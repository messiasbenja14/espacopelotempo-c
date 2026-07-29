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
        printf("digite o nome do programa seguido de 2 ou 3 argumentos (ex: espacopelotempo 40 2) (ex: espacopelotempo 40 2 3)\n");
        printf("sendo 40 a velocidade, 2 o tempo, e 3 a aceleracao, esses valores
