#include <stdio.h>

void escolherConversaoTemperatura();

float celsiusParaFahrenheit(float temperaturaCelsius);
float celsiusParaKelvin(float temperaturaCelsius);

float fahrenheitParaCelsius(float temperaturaFahrenheit);
float fahrenheitParaKelvin(float temperaturaFahrenheit);

float kelvinParaCelsius(float temperaturaKelvin);
float kelvinParaFahrenheit(float temperaturaKelvin);

void escolherConversaoTemperatura() {
    int opcao, validacao = 1;
    float temperatura;

    do {
        printf("\nInsira 1: Celsius -> Fahrenheit\n"
               "Insira 2: Celsius -> Kelvin\n"
               "Insira 3: Fahrenheit -> Celsius\n"
               "Insira 4: Fahrenheit -> Kelvin\n"
               "Insira 5: Kelvin -> Celsius\n"
               "Insira 6: Kelvin -> Fahrenheit\n"
               "Insira 7: Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf("%.2f ºC em Fahrenheit: %.2f ºF\n", temperatura,
                   celsiusParaFahrenheit(temperatura));
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf("%.2f ºC em Kelvin: %.2f K\n", temperatura,
                   celsiusParaKelvin(temperatura));
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf("%.2f ºF em Celsius: %.2f ºC\n", temperatura,
                   fahrenheitParaCelsius(temperatura));
            break;
        case 4:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf("%.2f ºF em Kelvin: %.2f K\n", temperatura,
                   fahrenheitParaKelvin(temperatura));
            break;
        case 5:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            printf("%.2f K em Celcius: %.2f ºC\n", temperatura,
                   kelvinParaCelsius(temperatura));
            break;
        case 6:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            printf("%.2f K em Fahrenheit: %.2f ºF\n", temperatura,
                   kelvinParaFahrenheit(temperatura));
            break;
        case 7:
            printf("Programa executado com sucesso!\n");
            validacao = 0;
            break;
        default:
            printf("Opção inidisponível :( Tente novamente\n");
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