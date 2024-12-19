#include <stdio.h>
#include "conversoes.h"
#include <string.h>


float conversorDeVelocidade(){
    float valorConvertido,valorInicial;
    char unidadeDeMedidaInicial[5], unidadeDeMedidaFinal[5];
    int validador,selecaoUnidadeConversao;

    printf("_____________Conversor de unidade de medida de velocidade(km/h m/s mph)____________ \n");
    printf("|Insira 1: Converter de km/h                                                       |\n");
    printf("|Insira 2: Converter de m/s                                                        |\n");
    printf("|Insira 3: Converter de mph                                                        |\n");
    printf("|__________________________________________________________________________________|\n");       
    printf(">>> ");
    scanf("%d", &validador);

    switch (validador)
    {
    case 1:
        printf("Insira o valor em km/h :\n");
        printf(">>> ");
        scanf("%f", &valorInicial);
        printf("__________________________________________________________________________________|\n");  
        printf("|Insira 1: Converter para m/s                                                     |\n");
        printf("|Insira 2: Converter de mph                                                       |\n");
        printf("__________________________________________________________________________________|\n");                 
        printf(">>> ");
        scanf("%d", &selecaoUnidadeConversao);

        switch (selecaoUnidadeConversao)
        {
        case 1: //Converter para m/s 
            valorConvertido = (valorInicial / 3.6);
            printf("O valor convertido %f de Km/h para m/s eh %f",valorInicial,valorConvertido);          
            break;
        case 2: //Converter para mph 
            valorConvertido = (valorInicial / 1.609);
            printf("O valor convertido %f de Km/h para mph eh %f",valorInicial,valorConvertido);    
            break;
        default:
            break;
        }
        break;

    case 2:
        printf("Insira o valor em m/s :\n", unidadeDeMedidaInicial);
        printf(">>> ");
        scanf("%f", &valorInicial);
        printf(" __________________________________________________________________________________ \n");          
        printf("|Insira 1: Converter para km/h                                                     |\n");
        printf("|Insira 2: Converter de mph                                                        |\n"); 
        printf("|__________________________________________________________________________________|\n");        
        printf(">>> ");
        scanf("%d", &selecaoUnidadeConversao);

        switch (selecaoUnidadeConversao)
        {
        case 1: //Converter para km/h 
            valorConvertido = (valorInicial * 3.6);
            printf("O valor convertido %f de m/s para km/h eh %f",valorInicial,valorConvertido);    
            break;
        case 2: //Converter para mph 
            valorConvertido = (valorInicial * 2.23);
            printf("O valor convertido %f de m/s para mph eh %f",valorInicial,valorConvertido);    
            break;
        default:
            break;
        }
        break;

    case 3:
        printf("Insira o valor em mph :\n", unidadeDeMedidaInicial);
        printf(">>> ");
        scanf("%f", &valorInicial);
        printf(" __________________________________________________________________________________ \n");  
        printf("|Insira 1: Converter para km/h                                                     |\n");
        printf("|Insira 2: Converter de m/s                                                        |\n");    
        printf("|__________________________________________________________________________________|\n");     
        printf(">>> ");
        scanf("%d", &selecaoUnidadeConversao);

        switch (selecaoUnidadeConversao)
        {
        case 1: //Converter para km/h 
            valorConvertido = (valorInicial * 1.609);
            printf("O valor convertido %f de mph para km/h eh %f",valorInicial,valorConvertido);    
            break;
        case 2: //Converter para m/s 
            valorConvertido = (valorInicial * 2.237);
            printf("O valor convertido %f de mph para m/s eh %f",valorInicial,valorConvertido);    
            break;
        default:
            break;
        }
        break;   
    default:
        break;
    }
    return valorConvertido;
}