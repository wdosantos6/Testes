/*
a) Escreva uma função chamada transformaColherEmML que receba uma quantidade em colheres de sopa e
retorna-a em ml.
Fórmula de conversão: 1 colher de sopa equivale a 15ml

b) Escreva uma função chamada transformaXicarasEmML que receba uma quantidade de xícaras e retorna-a
em ml. Esta função deve ativar a função do item a)
Fórmula de conversão de xícaras para colheres de sopa: 1 xícara equivale a 16 colheres de sopa
c) Escreva uma função que receba uma quantidade de xícaras e a respectiva quantidade de ml e exiba uma
mensagem no seguinte formato:
*****************
XXX xic == YYYYY ml
*****************
Obs: o comprimento da linha de &#39;*&#39; deve ser idêntico ao comprimento da mensagem dos valores
4) Escreva um programa (BP) que pergunte ao usuário quantas xícaras de mel são utilizadas na receita e, utilizando,
obrigatoriamente as funções acima, mostre a quantidade em l no seguinte formato:
*****************
XXX xic == YYYYY ml
*****************
 */

    #include <stdio.h>
    int transformaColherEmML(int colherS){
        int miliL=colherS * 15;
        return miliL;
    }

    int transformaXicarasEmML(int xicara){
        int convXicara= xicara *16;
        int miliX = transformaColherEmML(convXicara);

        return miliX;
    }

    void moldura(){
        printf("******************************");
        return;
    }

    int main(){
        int xic,colher;
        printf("Quantas xícaras de mel são utilizadas na receita?\n");
        scanf("%i", &xic);
        colher= transformaXicarasEmML(xic);
        moldura();
        printf("\n\t%i xícaras = %i ml\n", xic,colher);
        moldura();
        return 0;
    }
