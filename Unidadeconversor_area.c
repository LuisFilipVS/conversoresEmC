#include <stdio.h>

// Funções para conversão
double metrosQuadradosParaCentimetrosQuadrados(double metros) {
    return metros * 10000;
}

double centimetrosQuadradosParaMetrosQuadrados(double centimetros) {
    return centimetros / 10000;
}

int main() {
    int opcao;
    double valor, resultado;

    printf("===== Conversor de Unidades de Área =====\n");
    printf("1. Metros quadrados para centímetros quadrados\n");
    printf("2. Centímetros quadrados para metros quadrados\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o valor em metros quadrados: ");
        scanf("%lf", &valor);
        resultado = metrosQuadradosParaCentimetrosQuadrados(valor);
        printf("%.2lf metros quadrados equivalem a %.2lf centímetros quadrados.\n", valor, resultado);
    } else if (opcao == 2) {
        printf("Digite o valor em centímetros quadrados: ");
        scanf("%lf", &valor);
        resultado = centimetrosQuadradosParaMetrosQuadrados(valor);
        printf("%.2lf centímetros quadrados equivalem a %.2lf metros quadrados.\n", valor, resultado);
    } else {
        printf("Opção inválida. Por favor, reinicie o programa.\n");
    }

    return 0;
}
