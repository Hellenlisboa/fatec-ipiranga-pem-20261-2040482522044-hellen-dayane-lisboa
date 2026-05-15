#include "interface.h"
#include <stdio.h>

void exibirMenu(void)
{
    printf("1. Converter Decimal para Binario\n");
    printf("2. Calcular Potencia\n");
    printf("3. Somar Digitos de um Numero\n");
    printf("0. Fechar o programa\n");
}

int capturarEscolhaUsuario(void)
{
    int escolha;
    printf("Opção desejada: ");
    scanf("%d", &escolha);
    return escolha;
}

int receberNumero(void)
{
    int numero;
    printf("Escolha um valor: ");
    scanf("%d", &numero);
    return numero;
}