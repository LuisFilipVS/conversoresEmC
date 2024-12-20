#include <stdio.h>
#include "conversoes.h"

void escolherConversaoComprimento() {
    int opcao;
    float valor;

    printf("\n|_____________Conversor de Comprimento_____________|\n"
           "|Insira 1: Metros -> Centímetros                  |\n"
           "|Insira 2: Metros -> Milímetros                   |\n"
           "|Insira 3: Centímetros -> Metros                  |\n"
           "|_________________________________________________|\n"
           ">>> ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida para a opção.\n");
        return;  // Interrompe a função caso a entrada seja inválida
    }

    printf("\nDigite o valor: ");
    if (scanf("%f", &valor) != 1) {
        printf("Entrada inválida para o valor.\n");
        return;  // Interrompe a função caso a entrada seja inválida
    }

    switch(opcao) {
        case 1:
            printf("%.2f metros = %.2f centímetros\n", valor, metrosParaCentimetros(valor));
            break;
        case 2:
            printf("%.2f metros = %.2f milímetros\n", valor, metrosParaMilimetros(valor));
            break;
        case 3:
            printf("%.2f centímetros = %.2f metros\n", valor, centimetrosParaMetros(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

float metrosParaCentimetros(float metros) {
    return metros * 100;
}

float metrosParaMilimetros(float metros) {
    return metros * 1000;
}

float centimetrosParaMetros(float centimetros) {
    return centimetros / 100;
}
