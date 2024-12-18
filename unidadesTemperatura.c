#include <stdio.h>
#include "conversoes.h"

void escolherConversaoTemperatura() {
    int opcao, validacao = 1;
    float temperatura;

    do {
        printf("\n|_____________Conversor de Temperatura_____________|\n"
            "|Insira 1: Celsius -> Fahrenheit                   |\n"
            "|Insira 2: Celsius -> Kelvin                       |\n"
            "|Insira 3: Fahrenheit -> Celsius                   |\n"
            "|Insira 4: Fahrenheit -> Kelvin                    |\n"
            "|Insira 5: Kelvin -> Celsius                       |\n"
            "|Insira 6: Kelvin -> Fahrenheit                    |\n"
            "|Insira 7: Voltar                                  |\n"
            "|__________________________________________________|\n"
            ">>> ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf(
                "\n===============================================\n"
                "%.2f ºC em Fahrenheit: %.2f ºF"
                "\n===============================================\n",
                temperatura, celsiusParaFahrenheit(temperatura));
            break;
        case 2:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf(
                "\n===============================================\n"
                "%.2f ºC em Kelvin: %.2f K"
                "\n===============================================\n",
                temperatura, celsiusParaKelvin(temperatura));
            break;
        case 3:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf(
                "\n===============================================\n"
                "%.2f ºF em Celsius: %.2f ºC" 
                "\n===============================================\n",
                temperatura, fahrenheitParaCelsius(temperatura));
            break;
        case 4:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf(
                "\n===============================================\n"
                "%.2f ºF em Kelvin: %.2f K" 
                "\n===============================================\n",
                temperatura, fahrenheitParaKelvin(temperatura));
            break;
        case 5:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            printf(
                "\n===============================================\n"
                "%.2f K em Celcius: %.2f ºC"
                "\n===============================================\n",
                temperatura, kelvinParaCelsius(temperatura));
            break;
        case 6:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            printf(
                "\n===============================================\n"
                "%.2f K em Fahrenheit: %.2f ºF" 
                "\n===============================================\n",
                temperatura, kelvinParaFahrenheit(temperatura));
            break;
        case 7:
            validacao = 0;
            break;
        default:
            printf("\nOpção inidisponível :( Tente novamente\n");
            validacao = 1;
            break;
        }
    } while (validacao);
}

float celsiusParaFahrenheit(float temperaturaCelsius) {
    return (9.0 * temperaturaCelsius / 5.0) + 32.0;
}

float celsiusParaKelvin(float temperaturaCelsius) {
    return temperaturaCelsius + 273.0;
}

float fahrenheitParaCelsius(float temperaturaFahrenheit) {
    return 5.0 * (temperaturaFahrenheit - 32) / 9.0;
}

float fahrenheitParaKelvin(float temperaturaFahrenheit) {
    return (5.0 * (temperaturaFahrenheit - 32) / 9.0) + 273.0;
}

float kelvinParaCelsius(float temperaturaKelvin) {
    return temperaturaKelvin - 273.0;
}

float kelvinParaFahrenheit(float temperaturaKelvin) {
    return (9.0 * (temperaturaKelvin - 273) / 5) + 32.0;
}