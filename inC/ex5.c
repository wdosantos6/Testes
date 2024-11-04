#include <stdio.h>
//Criar um programa que,dada o total,crie uma entrada >= a duas prestações,que devem ser inteiras,iguais e as maiores possíveis
//dica:transformar o valor em inteiro e dividir por tres

int main(void){
    float ent;
    int total,prest;

    printf("Insira o valor da compra:");
    scanf("%lf", &total);
    prest = total/3;
    ent = prest+(total%3);
    
    printf("%.2f", ent);
    printf("\n %i", prest);


    return 0;
}