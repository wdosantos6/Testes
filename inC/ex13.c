/*proporção suco:1 para 2 de água
proporção refresco: 1 para 4 de água
copos de 100ml
programa que leia a litragem do concentrado e o preço pago pelo concentrado
Saída:quantos litros de refresco de uva podem ser produzidos com todo o concentrado
quantos de suco podem ser produzidos
quanto irá receber pelo refresco (copo a R$1,00)
quanto irá receber pelo suco (copo a R$2,00)
percentual de lucro refresco> valor recebido-custo/valor recebido
percentual de lucro suco,msm calculo
*/
#include <stdio.h>

int main()
{
 float con,pre_pago,litros_suco,litros_refresco,prere_su,prere_re,lucro_su,lucro_re;
 int co_su,co_re;

    printf("Quantos litros de concentrado comprou?");
    scanf("%f", &con);
    printf("Quanto pagou nesse concentrado? R$ ");
    scanf("%f", &pre_pago);
    litros_suco = con + con*2;
    litros_refresco = con + con*4;
    co_su = litros_suco *10;
    co_re = litros_refresco *10;
    prere_su = co_su *2;
    prere_re = co_re;
    lucro_su =(prere_su - pre_pago)/prere_su;
    lucro_re = (prere_re - pre_pago)/prere_re;
    
    printf("Para %.2f L de concentrado você consegue %.2f L de suco e %.2f L de refresco \n", con ,litros_suco,litros_refresco);
    printf("Com %.2f L de suco, se consegue %i copos de suco, com valor de R$ %.2f. Com %.2f L de refresco, se consegue %i copos de refresco,obtendo valor de R$ %.2f\n", litros_suco,co_su,prere_su,litros_refresco,co_re,prere_re);
    printf("O lucro com suco é de:%.2f%% e com refresco de %.2f%%",lucro_su,lucro_re);



    return 0;
}
