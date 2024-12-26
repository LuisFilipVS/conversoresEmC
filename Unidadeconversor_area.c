#include <stdio.h>

// Funções para conversão
double metrosQuadradosParaCentimetrosQuadrados(double metros);
double centimetrosQuadradosParaMetrosQuadrados(double centimetros);


int main() {
    int opcao;
    double valor, resultado;

    printf("===== Conversor de Unidades de Area =====\n");
    printf("1. Metro(s) quadrados para centimetro(s) quadrados\n");
    printf("2. Centimetro(s) quadrados para metro(s) quadrados\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o valor em metro(s) quadrados: ");
        scanf("%lf", &valor);
        resultado = metrosQuadradosParaCentimetrosQuadrados(valor);
        printf("%.2lf metro(s) quadrados equivalem a %.2lf centimetro(s) quadrados.\n", valor, resultado);
    } else if (opcao == 2) {
        printf("Digite o valor em centimetro(s) quadrados: ");
        scanf("%lf", &valor);
        resultado = centimetrosQuadradosParaMetrosQuadrados(valor);
        printf("%.2lf centimetro(s) quadrados equivalem a %.2lf metro(s) quadrados.\n", valor, resultado);
    } else {
        printf("Opcao invalida. Por favor, reinicie o programa.\n");
    }
    return 0;
}

double metrosQuadradosParaCentimetrosQuadrados(double metros) {
    return metros * 100;
}

double centimetrosQuadradosParaMetrosQuadrados(double centimetros) {
    return centimetros / 100;
}