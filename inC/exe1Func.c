#include <stdio.h>
#include <math.h>
#define pi 3.14
float dobrar(float x){
    float a= 2*x;

return a;
}
float areaR(float bR,float aR){
   float area=bR*aR;

    return area;
}
float calcPR(float base,float altura){

    float perim=dobrar(base)+dobrar(altura);

    return perim;
}
float calcVolR(float laA,float laB, float laH){

    float vol=laA*laB*laH;

    return vol;
}
float areaC(float raio){
    float ac= pi*pow(raio,2);

    return ac;
}

float calcPC(float raio){
    float pc=(2*pi)*raio;

    return pc;
}

float volumeCil(float raio, float altura){
    float volCil= areaC(raio)*altura;
    return volCil;
}

float calcHipo(float cateto1,float cateto2){
    float hipo=sqrt(pow(cateto1,2)+pow(cateto2,2));

    return hipo;
}

float dist2P(float x1,float y1, float x2, float y2){
    float dist= sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    return dist;
}
float calcPT(float lado1,float lado2,float lado3){
    float perim=lado1+lado2+lado3;

    return perim;
}

float calcAT(float lado1,float lado2,float lado3){
    float area=calcPT(lado1,lado2,lado3)/2;

    return area;
}
int main(void){
    float teste=areaR(2,2);
    printf("%.2f",teste);
  
    return 0;
}



























/*
1. Crie as funções abaixo e teste-as. Lembre-se que uma função pode chamar outra função.
a) Escreva uma função para calcular e retornar a área de um retângulo. Esta função deverá receber os valores
das duas dimensões (base e altura) e retornar o valor da área.Done
b) Escreva uma função para calcular e retornar o perímetro de um retângulo. Esta função deverá receber os
valores das duas dimensões (base e altura) e retornar o valor do perímetro. Done
c) Escreva uma função para calcular e retornar o volume de uma caixa retangular. Esta função deverá receber
os valores dos lados a e b e altura h e retornar o valor do volume. (V caixa = a * b * h) Done
d) Escreva uma função para calcular e retornar a área de um círculo. Esta função deverá receber o valor do
raio como parâmetro e retornar o valor da área.Done
e) Escreva uma função para calcular e retornar o perímetro um círculo. Esta função deverá receber o valor do
raio como parâmetro e retornar o valor do perímetro.Done
f) Escreva uma função para calcular e retornar o volume de um cilindro. Esta função deverá receber os
valores do raio e da altura (r,h) e retornar o valor do volume (V cilindro = πhr2).Done
g) Escreva uma função para calcular e retornar a hipotenusa de um triângulo retângulo. Esta função deverá
receber os valores dos catetos e retornar o valor da hipotenusa. Done
h) Escreva uma função para calcular e retornar a distância entre dois pontos. A função recebe os valores das
coordenadas dos pontos e retorna o valor da distância entre eles (comprimento da semireta) calculada por:Done
i) Escreva uma função para calcular e retornar o perímetro de um triângulo. Esta função recebe os valores
dos 3 lados e retorna o valor do perímetro.Done
j) Escreva uma função para calcular e retornar a área de um triângulo. Esta função recebe os valores dos 3
lados e calcula a área pela fórmula de Heron:
*/