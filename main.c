#include <stdio.h>
#include <stdbool.h>

int main(){
    int selecao;
    bool validacao;

    do {
        printf("_____________Conversor de unidade de medida em C _____________|\n");
        printf("|Insira 1: Converter Unidade De comprimento (m, cm, mm)       |\n");
        printf("|Insira 2: Converter Unidade De massa (kg, gr, Ton)           |\n");
        printf("|Insira 3: Converter Unidade De volume (l, ml, m3)            |\n");
        printf("|Insira 4: Converter Unidade De temperatura (C, F, K)         |\n");
        printf("|Insira 5: Converter Unidade De velocidade (Km/h, m/s, mph)   |\n");
        printf("|Insira 6: Sair                                               |\n");
        printf("|_____________________________________________________________|\n");
        printf(">>> ");
        scanf("%d", &selecao);
        printf("%d", selecao);

        switch (selecao)
        {
        case 1:
            printf("Executando conversão de comprimento\n");
            break;
        case 2:
            printf("Executando conversão de massa\n");
            break;
        case 3:
            printf("Executando conversão de volume\n");
            break;
        case 4:
            printf("Executando conversão de temperatura\n");
            break;
        case 5:
            printf("%f", velocidade());
            break;
        case 6:
            printf("Programa executado com sucesso!\n");
            validacao = false;
            break;
        default:
            break;
        }
    } while (validacao);

    return 0;
}
