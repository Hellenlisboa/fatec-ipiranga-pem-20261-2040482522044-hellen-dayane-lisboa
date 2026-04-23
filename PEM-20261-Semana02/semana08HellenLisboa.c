/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Gestão de carga em logística     *
* Data - 23/04/2026                                      * 
* Autor: Hellen Dayane Lisboa                             *
*--------------------------------------------------------*/

#include <stdio.h>

void processarCarga(float *vetor, int tamanho)
{
    float soma = 0;
    float media;
    float limite;
    float *P;

    // Soma pesos
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }

    // Calculo de media e limite
    media = soma / tamanho;
    limite = media * 1.10;

    for (int i = 0; i < tamanho; i++)
    {
        P = &vetor[i];

        if (*P > limite)
        {
            *P = *P * 0.95;
        }
    }
}

int main()
{
    // Vetor de pesos
    float pesos[10] = {100, 120, 95, 130, 110, 90, 140, 105, 115, 125};

    int tamanho = 10;

    // mostrando o vetor antes do tratamento
    printf("Antes do tratamento:\n");
    for (int i = 0; i < tamanho; i++)
    {
        // cortando a saída para duas casa decimais
        printf("%.2f ", pesos[i]);
    }

    // chamando a função de processarCarga
    processarCarga(pesos, tamanho);

    // mostrando o vetor depois do tratamento
    printf("\n\nDepois do tratamento:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%.2f ", pesos[i]);
    }

    return 0;
}   