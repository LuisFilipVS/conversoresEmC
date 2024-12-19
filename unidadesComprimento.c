#include <stdio.h>
#include <stdlib.h>
#include "conversoes.h"



void converterCompriemento(){

    int opcao, validacao = 1;
    float comprimento;
    const char *cabecalho[] = {
        "\n|___________________Centímetro___________________|\n",
        "\n|_____________________Metro______________________|\n",
        "\n|___________________Quilômetro___________________|\n",
        "\n|____________________Polegada____________________|\n",
        "\n|______________________Pés_______________________|\n",
        "\n|_____________________Jarda______________________|\n",
        "\n|_____________________Milha______________________|\n"
    };

    system("cls"); 

    do{
        printf("\n|____________Conversor de Comprimento____________|\n"
            "|Insira 1: Centímentro                           |\n"
            "|Insira 2: Metro                                 |\n"
            "|Insira 3: Quilômetro                            |\n"
            "|Insira 4: Polegada                              |\n"
            "|Insira 5: Pés                                   |\n"
            "|Insira 6: Jarda                                 |\n"
            "|Insira 7: Milha                                 |\n"
            "|Insira 8: Sair                                  |\n"
            "|________________________________________________|\n"
            ">>> ");
            scanf("%d", &opcao);
            system("cls");
            

        
        printf("\n|____________Conversor de Comprimento____________|\n");

    } while(validacao);


}