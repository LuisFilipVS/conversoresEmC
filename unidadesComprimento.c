//===========================================================================================
//                                    unidadesComprimento.c
//===========================================================================================

//Autor: Davi Erlon Lopes de Morais

// Este arquivo contém as funções desenvolvidas para a conversão das unidades de comprimento
//do sistema internacional de medidas e do sistema imperial de medidas mais utilizadas, totalizando
//7 medidas. A lógica por trás deste programa se resume em uma interface que permite ao usuário
//escolher a unidade que deseja converter, chamando em seguida uma função que imprime um cabeçalho
//feito propositalmente separado para a variável <const char *cabecalho[]>, que é grande, não estar
//sempre alocada na pilha de execução ocupando memória, logo depois chamando uma função que lê o valor
//da unidade escolhida, que a converte para uma unidade comum para evitar um código muito grande cheio
//de funções, que, por fim, chama uma função que imprime uma tabela com todas as medidas já convertidas
//com base nessa unidade comum, que foi escolhida centímetro mas também poderia ser qualquer outra.


#include <stdio.h>
#include <stdlib.h>
#include "conversoes.h"

void converterComprimento(){

    int opcao, validacao = 1;

    do{
        printf("\n|____________Conversor de Comprimento____________|\n"
            "|Insira 1: Centímetro                            |\n"
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

            if(opcao > 0 && opcao < 8){
                
                cabecalhoComprimento(opcao);
                obterComprimento(opcao);

            } else if(opcao == 8){

                validacao = 0;
                system("cls");

            } else {
                printf("Opção inválida! Tente novamente\n");
            }
    } while(validacao);
}

void cabecalhoComprimento(int indice){ //como a constante de cabeçalho é grande, esta foi feita apenas para imprimí-la e ser desalocada

    const char *cabecalho[] = {
        "\n|___________________Centímetro___________________|\n\n",
        "\n|_____________________Metro______________________|\n\n",
        "\n|___________________Quilômetro___________________|\n\n",
        "\n|____________________Polegada____________________|\n\n",
        "\n|______________________Pés_______________________|\n\n",
        "\n|_____________________Jarda______________________|\n\n",
        "\n|_____________________Milha______________________|\n\n"
    };

    printf("%s", cabecalho[indice-1]);
}

void obterComprimento(int opc){
    
    double comprimento;
    double medidaComum;
    
    printf("Digite o valor >>> ");

    scanf("%lf", &comprimento);

    switch(opc){ //switch que converte qualquer unidade para centímetro
    case 1:
        medidaComum = comprimento;
        break;
    case 2:
        medidaComum = comprimento * 100.0;
        break;
    case 3:
        medidaComum = comprimento * 100000.0;
        break;
    case 4:
        medidaComum = comprimento * 2.54;
        break;
    case 5:
        medidaComum = comprimento * 30.48;
        break;
    case 6:
        medidaComum = comprimento * 91.44;
         break;
    case 7:
        medidaComum = comprimento * 160934.4;
        break;
    }

    tabelaComprimento(medidaComum); //chamada de uma função aceita valor em centímetro e imprime uma tabela 
}

void tabelaComprimento(double cm){
    printf( "\n\n__________Tabela de conversão__________\n"
            "|Centímetro --------------- %lf \n"
            "|Metro -------------------- %lf \n"
            "|Quilômetro --------------- %lf \n"
            "|Polegada ----------------- %lf \n"
            "|Pés ---------------------- %lf \n"
            "|Jarda -------------------- %lf \n"
            "|Milha -------------------- %lf \n"
            "|______________________________________\n", (cm), (cm / 100.0), (cm / 100000.0), (cm / 2.52), (cm / 30.48), (cm / 91.44), (cm / 160934.4));
            printf("\nTecle Enter para voltar!\n");
            getchar(); //limpa o buffer
            getchar(); //lê qualquer tecla para continuar o programa
            system("cls");
}