//===========================================================================================
//                                    unidadesVolume.c
//===========================================================================================

//Autor: Neilma De Jesus Santos

//Este arquivo apresenta funções que serão utilizadas para realizar conversões
//em medidas de bits de volume, sendo eles metros cúbicos, mililitros, galões e litros

#include <stdio.h>

// Funções de conversão
float converte_litros_m3(float litros);
float converte_mililitros_litros(float mililitros);
float converte_galoes_litros(float galoes);

int conversorVolume() {
    printf("\n1000 litros equivalem a %.6f metros cúbicos.\n", converte_litros_m3(1000));
    printf("\n500 mililitros equivalem a %.6f litros.\n", converte_mililitros_litros(500));
    printf("\n10 galões equivalem a %.6f litros.\n", converte_galoes_litros(10));

    return 0;
}

float converte_litros_m3(float litros) {
    // 1 litro = 0.001 metros cúbicos
    return litros * 0.001;
}

float converte_mililitros_litros(float mililitros) {
    // 1 mililitro = 0.001 litros
    return mililitros * 0.001;
}

float converte_galoes_litros(float galoes) {
    // 1 galão (EUA) = 3.78541 litros
    return galoes * 3.78541;
}
