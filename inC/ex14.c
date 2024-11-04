/*
Entrada:ler o valor total de um produto em promoção
Saída: Produto com desconto
Ex:
Código do produto:xxyy
Preço básico: xx*15+yy
Percentual de desconto:yy
Código for:2314
Preço:23*15+14=359
Desconto:14%
Total(359-14%):308,74

*/

#include <stdio.h>

int main()
{
    int cod,xx,yy;
    float pre_a,pre_f;

printf("Digite o código do produto: ");
scanf("%i",&cod);
xx=cod/100;
yy=cod%100;
pre_a=xx*15+yy;
pre_f= pre_a-pre_a*yy/100;
printf("O preço com desconto é de R$ %.2f ",pre_f);

    return 0;
}