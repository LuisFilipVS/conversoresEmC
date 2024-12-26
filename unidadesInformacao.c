//===========================================================================================
//                                    unidadesInformacao.c
//===========================================================================================

//Autor: Eduardo Ferreira Neves Rocha

//Este arquivo apresenta funções que serão utilizadas para realizar conversões
//em medidas de bits de informação, sendo eles bit, byte, KiloByte, MegaByte, GigaByte,
//TeraByte

#include <stdio.h>
#include <string.h>

int conversorInformacao(){
int Unidade1;
int Unidade2;
float bit;
float byte;
float kb;
float mb;
float gb;
float tb;
float quantidade;
float quantidade2;
float conversor;
bit=0.125;
byte=1;
kb=1024;
mb=1048576;
gb=1073741824;
tb = 1099511627776;
printf("Conversor de unidades de informação \n");
printf("Selecione a unidade a ser convertida \n");
printf("1 - Bit \n");
printf("2 - Byte \n");
printf("3 - Kilobyte \n");
printf("4 - Megabyte \n");
printf("5 - Gigabyte \n");
printf("6 - Terabyte \n");
scanf("%d",&Unidade1);
if ((Unidade1<1) | (Unidade1>6)){
    while ((Unidade1<1) | (Unidade1>6)) {
        printf("Número inválido \n");
        printf("Conversor de unidades de informação \n");
        printf("Selecione a unidade a ser convertida \n");
        printf("1 - Bit \n");
        printf("2 - Byte \n");
        printf("3 - Kilobyte \n");
        printf("4 - Megabyte \n");
        printf("5 - Gigabyte \n");
        printf("6 - Terabyte \n");
        scanf("%d",&Unidade1);
    }
}
printf("Selecione a quantidade \n");
scanf("%f",&quantidade);
if (Unidade1==1){
    quantidade2=quantidade*bit;
} else {
    if (Unidade1==2){
        quantidade2=quantidade*byte;
    } else {
        if (Unidade1==3){
            quantidade2=quantidade*kb;
        } else {
            if (Unidade1==4){
                quantidade2=quantidade*mb;
            } else {
                if (Unidade1==5){
                    quantidade2=quantidade*gb;
                } else {
                    if (Unidade1==6){
                        quantidade2=quantidade*tb;
                    }
                }
            }
        }
    }
}
printf("Deseja converter para \n");
printf("1 - Bit \n");
printf("2 - Byte \n");
printf("3 - Kilobyte \n");
printf("4 - Megabyte \n");
printf("5 - Gigabyte \n");
printf("6 - Terabyte \n");
scanf("%d",&Unidade2);
if ((Unidade2<1) | (Unidade2>6)){
    while ((Unidade2<1) | (Unidade2>6)) {
        printf("Número inválido \n");
        printf("Conversor de unidades de informação \n");
        printf("Deseja converter para \n");
        printf("1 - Bit \n");
        printf("2 - Byte \n");
        printf("3 - Kilobyte \n");
        printf("4 - Megabyte \n");
        printf("5 - Gigabyte \n");
        printf("6 - Terabyte \n"); 
        scanf("%d",&Unidade2);
    }
}
if (Unidade2 == 1){
    conversor=quantidade2/bit;
} else {
    if (Unidade2 == 2){
        conversor=quantidade2;
    } else {
        if (Unidade2 == 3){
            conversor=quantidade2/kb;
        } else {
            if (Unidade2 == 4){
                conversor=quantidade2/mb;
            } else {
                if (Unidade2 == 5){
                    conversor=quantidade2/gb;
                } else {
                    if (Unidade2 == 6){
                        conversor=quantidade2/tb;
                    }
                }
            }
        }
    }
}

printf ("Resultado: %f",conversor);

return 0;
}
