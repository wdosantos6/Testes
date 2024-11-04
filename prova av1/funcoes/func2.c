/*
a) Escreva uma função chamada areaQuadrado que receba o comprimento do lado de um quadrado (em
metros) e retorne a área do quadrado.
Sabe-se que: área do quadrado=lado ^2
b) Escreva uma função chamada areaTriEquilatero que receba o comprimento do lado de um triângulo
equilátero (em metros) e retorne a sua área.
Sabe-se que: área do triângulo equilátero= (lado^2 ∗ √3)/4
c) Escreva uma função chamada areaHachurada que receba o comprimento do lado do quadrado (em
metros) da figura abaixo e exiba a área da parte hachurada. Obrigatoriamente, esta função deve
utilizar as funções dos itens anteriores.
Sabe-se que
● maior triângulo equilátero na figura possui lado igual ao do quadrado e
● o triângulo equilátero menor na figura possui lado igual à metade do lado do quadrado e
● o quadrado menor tem 2/3 do lado do triângulo equilátero menor

d) Escreva um programa que, utilizando adequadamente as três funções dos itens anteriores, leia o
comprimento do lado de um quadrado (em metros) e imprima a área da figura hachurada acima com 2
casas decimais.
*/
#include <stdio.h>
#include <math.h>


    float areaQuadrado(float ladoQ){
        float areaQ =pow(ladoQ,2);  
    return areaQ;
}
    float areaTriEquilatero(float ladoT){
        float areaT= (areaQuadrado(ladoT)*sqrt(3))/4;
        return areaT;
}

    float areaHachurada(float ladoQua){
        float areaH=areaTriEquilatero(ladoQua)+areaTriEquilatero(ladoQua/2)+ areaQuadrado(ladoQua*2/3);
        return areaH;
}

int main(){
    float hachurada,lado;
    printf("Qual o lado do quadrado?(Em metros)\n");
    scanf("%f", &lado);
    hachurada= areaHachurada(lado);
    printf(" A área do quadrado acima é de %.2fm", hachurada);

    return 0;
}