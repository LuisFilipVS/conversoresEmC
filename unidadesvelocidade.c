//===========================================================================================
//                                    unidadesVelocidade.c
//===========================================================================================

//Autor: Luis Filipe Vieira Silva

//Este arquivo apresenta funções que serão utilizadas para realizar conversões
//em medidas de velocidade, sendo elas Km/h, m/s e mph
//O método utilizado para desenvolver as funções busca um meio mais eficiente,
//no qual ao invés de criar métodos para cada combinação de conversão, eu busquei
//criar somente os métodos necessários para converter o valor inserido para uma unidade
//de medida padrão(m/s) e partir das solicitações do usuários, eu utilizo as funções para
//para chegar na unidade de medida que ele deseja. Portanto, para converter de mph para Km/h
//não há um metódo que faça isso direto, mas sim um método que converte de mph para m/s e de
//m/s para km/h.

//Benefícios: Esse modelo se torna mais interessante para grandes quantidades de unidades 
//de medida em determinada grandeza.

#include <stdio.h>
#include "conversoes.h"
#include <string.h>

float MPSparaKMPH(float medida);
float MPSparaMPH(float medida);
float KMPHparaMPS(float medida);
float MPHparaMPS(float medida);

void conversorDeVelocidade2(){
    int seletorOrigem, seletorDestino;
    float valorInicial, valorFinal;

    printf("_____________Conversor de unidade de medida de velocidade(km/h m/s mph)____________ \n");
    printf("|Insira 1: Converter de km/h                                                       |\n");
    printf("|Insira 2: Converter de m/s                                                        |\n");
    printf("|Insira 3: Converter de mph                                                        |\n");
    printf("|__________________________________________________________________________________|\n");       
    printf(">>> ");
    scanf("%d", &seletorOrigem);


    printf("_______________________Selecione a unidade de medida de destino____________________ \n");
    if(seletorOrigem != 1){
        printf("|Insira 1: Converter para km/h                                                       |\n");
    }
    if(seletorOrigem != 2){
        printf("|Insira 2: Converter para m/s                                                        |\n");
    }
    if(seletorOrigem != 3){
        printf("|Insira 3: Converter para mph                                                        |\n");
    }
    printf("|__________________________________________________________________________________|\n");       
    printf(">>> ");
    scanf("%d", &seletorDestino);

    switch (seletorOrigem)
    {
    case 1:
        if(seletorDestino == 2){
            printf("Insira o valor em km/h :\n");
            printf(">>> ");
            scanf("%f", &valorInicial);
            printf("O valor convertido de Km/h %f para m/s eh %f", valorInicial, KMPHparaMPS(valorInicial));

        } else if(seletorDestino == 3){
            printf("Insira o valor em km/h :\n");
            printf(">>> ");
            scanf("%f", &valorInicial);
            valorFinal = KMPHparaMPS(valorInicial);
            printf("O valor convertido de Km/h %f para mph eh %f", valorInicial, MPSparaMPH(valorFinal));
        }
        break;
    case 2:
        if(seletorDestino == 1){
            printf("Insira o valor em m/s :\n");
            printf(">>> ");
            scanf("%f", &valorInicial);
            printf("O valor convertido de m/s %f para km/h eh %f", valorInicial, MPSparaKMPH(valorInicial));

        } else if(seletorDestino == 3){
            printf("Insira o valor em m/s :\n");
            printf(">>> ");
            scanf("%f", &valorInicial);
            printf("O valor convertido de m/s %f para mph eh %f", valorInicial, MPSparaMPH(valorInicial));
        }
        break;
    case 3:
        if(seletorDestino == 1){
            printf("Insira o valor em mph :\n");
            printf(">>> ");
            scanf("%f", &valorInicial);
            valorFinal = MPHparaMPS(valorInicial);
            printf("O valor convertido de mph %f para km/h eh %f", valorInicial, MPSparaKMPH(valorFinal));

        } else if(seletorDestino == 2){
            printf("Insira o valor em m/s :\n");
            printf(">>> ");
            scanf("%f", &valorInicial);
            printf("O valor convertido de mph %f para m/s eh %f", valorInicial, MPHparaMPS(valorInicial));
        }
        break;
    default:
        break;
    }
}

float MPSparaKMPH(float medida){
    return (medida * 3.6);
}

float MPSparaMPH(float medida){
    return (medida * 2.23);
}

float KMPHparaMPS(float medida){
    return (medida / 3.6);
}

float MPHparaMPS(float medida){
    return (medida / 2.237);
}