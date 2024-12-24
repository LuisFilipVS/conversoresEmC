//================================================================================
//                                unidadesMassa.c
//================================================================================
//
// Autor: Lucas Dias da Silva
//
// Este programa realiza conversões entre diferentes unidades de massa, como:
// - Quilogramas para gramas e toneladas;
// - Gramas para quilogramas e toneladas;
// - Toneladas para quilogramas e gramas.
//
// Funcionamento:
// - O programa apresenta um menu interativo para o usuário selecionar a conversão desejada.
// - Após a escolha, o usuário insere o valor a ser convertido.
// - O programa realiza o cálculo e exibe o resultado.
//
// Estrutura do menu:
// 1. Quilos -> Gramas
// 2. Quilos -> Toneladas
// 3. Gramas -> Quilos
// 4. Gramas -> Toneladas
// 5. Toneladas -> Quilos
// 6. Toneladas -> Gramas
//
// Benefícios:
// - Fácil de usar e ideal para aplicações em cálculos rápidos de conversão de massa.
//
// Inclui: <stdio.h> para funções de entrada/saída.
//

﻿#include <stdio.h>
#include "conversoes.h"

void escolherConversaoMassa() {
    int opcao;
    float valor;

    printf("\n|_____________Conversor de Massa_____________|\n"
           "|Insira 1: Quilos -> Gramas                  |\n"
           "|Insira 2: Quilos -> Toneladas               |\n"
           "|Insira 3: Gramas -> Quilos                  |\n"
           "|Insira 4: Gramas -> Toneladas               |\n"
           "|Insira 5: Toneladas -> Quilos               |\n"
           "|Insira 6: Toneladas -> Gramas               |\n"
           "|_____________________________________________|\n"
           ">>> ");
    scanf("%d", &opcao);

    printf("\nDigite o valor: ");
    scanf("%f", &valor);

    switch(opcao) {
        case 1:
            printf("%.2f quilos = %.2f gramas\n", valor, quilosParaGramas(valor));
            break;
        case 2:
            printf("%.2f quilos = %.2f toneladas\n", valor, quilosParaToneladas(valor));
            break;
        case 3:
            printf("%.2f gramas = %.2f quilos\n", valor, gramasParaQuilos(valor));
            break;
        case 4:
            printf("%.2f gramas = %.2f toneladas\n", valor, gramasParaToneladas(valor));
            break;
        case 5:
            printf("%.2f toneladas = %.2f quilos\n", valor, toneladasParaQuilos(valor));
            break;
        case 6:
            printf("%.2f toneladas = %.2f gramas\n", valor, toneladasParaGramas(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

float quilosParaGramas(float quilos) {
    return quilos * 1000;
}

float quilosParaToneladas(float quilos) {
    return quilos / 1000;
}

float gramasParaQuilos(float gramas) {
    return gramas / 1000;
}

float gramasParaToneladas(float gramas) {
    return gramas / 1000000;
}

float toneladasParaQuilos(float toneladas) {
    return toneladas * 1000;
}

float toneladasParaGramas(float toneladas) {
    return toneladas * 1000000;
}
