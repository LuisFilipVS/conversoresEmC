#include <stdio.h>
#include "conversoes.h"
#include <stdlib.h>

int main(){

    system("chcp 65001 > null");

    int selecao;
    int validacao = 1;

    do {
        printf("_____________Conversor de unidade de medida em C _____________|\n");
        printf("|Insira 1: Converter Unidade De comprimento (m, cm, mm)       |\n");
        printf("|Insira 2: Converter Unidade De massa (kg, gr, Ton)           |\n");
        printf("|Insira 3: Converter Unidade De volume (l, ml, m3)            |\n");
        printf("|Insira 4: Converter Unidade De temperatura (C, F, K)         |\n");
        printf("|Insira 5: Converter Unidade De velocidade (Km/h, m/s, mph)   |\n");
        printf("|Insira 6: Converter Unidade De área (m^2, cm^2)              |\n");
        printf("|Insira 7: Converter Unidade De Bits de informação(B,KB,MB)   |\n");
        printf("|Insira 8: Sair                                               |\n");
        printf("|_____________________________________________________________|\n");
        printf(">>> ");
        scanf("%d", &selecao);

        system("cls");

        switch (selecao)
        {
        case 1:
            printf("Executando conversão de comprimento\n");
            converterComprimento();
            break;
        case 2:
            printf("Executando conversão de massa\n");
            escolherConversaoMassa();
            break;
        case 3:
            printf("Executando conversão de volume\n");
            conversorVolume();
            break;
        case 4:
            printf("\nExecutando conversão de temperatura\n");
            escolherConversaoTemperatura();
            break;
        case 5:
            printf("\nExecutando conversão de velocidade\n");
            conversorDeVelocidade();
            break;
        case 6:
            printf("\nExecutando conversão de área\n");
            conversorArea();
            break;
        case 7:
            printf("\nExecutando conversão de informacao\n");
            conversorInformacao();
            break;
        case 8:
            printf("Programa executado com sucesso!\n");
            validacao = 0;
            break;
        default:
            printf("\nOpção inválida, tente novamente!\n\n");
            break;
        }
    } while (validacao);

    return 0;
}
