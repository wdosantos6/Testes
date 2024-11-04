/*
1-Construa a função converter_para_polegadas que recebe um tamanho em centímetros e retorna o tamanho em polegadas. Considere cada polegada correspondendo a 2,54 centímetros.  Done
2-Construa a função tamanhoDaForma_para_sapato_em_polegadas que recebe o comprimento do pé em
centímetros e tipo do sapato (normal, social, esportivo) e retorna o comprimento ajustado ao tipo do sapato em
polegadas, isto é, o tamanho da forma em polegadas
O pé, com seus 26 ossos, é muito flexível, expande e contrai durante a marcha. Consequentemente os sapatos precisam
ser mais compridos que os pés. Normalmente, para os sapatos sociais, é definido no mínimo 7 mm a mais e para
calcados esportivos, 15 mm.
Esta função deve ativar a função do item a)
3-c) Construa a função tamanho_sapato_sistema americano que recebe o comprimento do pé em centímetros, quem
vai usar (criança, homem, mulher) e o tipo do sapato (normal, social, esportivo) e retorna o tamanho do sapato
no sistema americano.
Os americanos têm um sistema diferente para homens, mulheres e crianças.:
– Tamanho sapato masculino= 3 X comprimento da forma em polegadas -24;
– Tamanho sapato feminino = 3 X comprimento da forma em polegadas -22.5;
– Tamanho sapato criança = 3 X comprimento da forma em polegadas -11.67.
Esta função deve ativar a função do item b)
4-Construa um programa, utilizando adequadamente as funções anteriores que pergunte ao usuário, o tamanho do
seu pé em cm, o tipo do sapato (normal, social, esportivo) e para quem é o sapato ((criança, homem, mulher)
mostrando o valor aproximado no sistema americano.
*/
#include <stdio.h>
float converter_para_polegadas(float centSap){
    float valorPol = centSap/2.54;
    return valorPol;
}
float  tamanhoDaForma_para_sapato_em_polegadas(float centSap,char tipo){
    float formaSap, pol;
    pol= converter_para_polegadas(centSap);

    if

    return formaSap;
}
int main(){
    float cent,pol;
    printf("Quantos centímetros tem seu pé?\n");
    scanf("%f", &cent);
pol= converter_para_polegadas(cent);
    printf("Convertendo cm para polegadas dá um total de :%.2f'", pol);

    return 0; 
}