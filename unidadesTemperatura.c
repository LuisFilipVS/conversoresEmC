/*
================================================================================================
                                    unidadesTemperatura.c
================================================================================================
    
    Autor: Marco Túlio Macêdo Oliveira dos Santos
    Descrição:
        Este arquivo implementa um conversor de unidades de temperatura, permitindo ao usuário
        realizar conversões entre Celsius, Fahrenheit e Kelvin. Ele fornece uma interface de
        menu interativo e utiliza funções auxiliares para realizar as conversões específicas.
        
        Funcionalidades principais:
        - Conversão de Celsius para Fahrenheit e Kelvin.
        - Conversão de Fahrenheit para Celsius e Kelvin.
        - Conversão de Kelvin para Celsius e Fahrenheit.
        - Navegação com opção para retornar para o menu principal.

    Observações:
        - As funções de conversão retornam um vetor estático contendo os resultados.
        - O menu permite ao usuário escolher a unidade de entrada e visualizar as conversões
         correspondentes.

================================================================================================
*/

#include <stdio.h>
#include "conversoes.h"

void escolherConversaoTemperatura() {
    int opcao, validacao = 1;
    float temperatura, *resultado;

    do {
        printf("\n|_____________Conversor de Temperatura_____________|\n"
               "|                                                  |\n"
               "| Escolha a unidade do valor de entrada:           |\n"
               "|                                                  |\n"
               "| Insira 1: Celsius                                |\n"
               "| Insira 2: Fahrenheit                             |\n"
               "| Insira 3: Kelvin                                 |\n"
               "| Insira 4: Voltar                                 |\n"
               "|__________________________________________________|\n"
               ">>> ");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 4) {
            printf("\nDigite a temperatura >>> ");
            scanf("%f", &temperatura);
        }

        switch (opcao) {
        case 1:
            resultado = conversoesCelsius(temperatura);
            printf("\n|_____________Conversões de Celsius_____________|\n"
                   "|\n"
                   "| Fahrenheit ---------------------- %.2f\n"
                   "| Kelvin -------------------------- %.2f\n"
                   "|_______________________________________________\n",
                   resultado[0], resultado[1]);
            break;
        case 2:
            resultado = conversoesFahrenheit(temperatura);
            printf("\n|_____________Conversões de Fahrenheit_____________|\n"
                   "|\n"
                   "| Celsius ---------------------- %.2f\n"
                   "| Kelvin ----------------------- %.2f\n"
                   "|_______________________________________________\n",
                   resultado[0], resultado[1]);
            break;
        case 3:
            resultado = conversoesKelvin(temperatura);
            printf("\n|_____________Conversões de Kelvin_____________|\n"
                   "|\n"
                   "| Celsius ------------------------- %.2f\n"
                   "| Fahrenheit ---------------------- %.2f\n"
                   "|_______________________________________________\n",
                   resultado[0], resultado[1]);
            break;
        case 4:
            validacao = 0;
            break;
        default:
            printf("\nOpção inidisponível :( Tente novamente\n");
            break;
        }
    } while (validacao);
}

float *conversoesCelsius(float temperaturaCelsius) {
    static float respostaC[2];
    respostaC[0] = (9.0 * temperaturaCelsius / 5.0) + 32.0; // Conversão para Fahrenheit
    respostaC[1] = temperaturaCelsius + 273.0;              // Conversão para Kelvin
    return respostaC;
}

float *conversoesFahrenheit(float temperaturaFahrenheit) {
    static float respostaF[2];
    respostaF[0] = 5.0 * (temperaturaFahrenheit - 32) / 9.0;           // Conversão para Celsius
    respostaF[1] = (5.0 * (temperaturaFahrenheit - 32) / 9.0) + 273.0; // Conversão para Kelvin
    return respostaF;
}

float *conversoesKelvin(float temperaturaKelvin) {
    static float respostaK[2];
    respostaK[0] = temperaturaKelvin - 273.0;                    // Conversão para Celsius
    respostaK[1] = (9.0 * (temperaturaKelvin - 273) / 5) + 32.0; // Conversão para Fahrenheit
    return respostaK;
}