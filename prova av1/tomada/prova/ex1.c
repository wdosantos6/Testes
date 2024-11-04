#include <stdio.h>

int calcValor(int numU, int precoU){
    int valTotal= numU * precoU;
    return valTotal;
}

int quantasPrecP(int numT,int valx, int valy){
    int quantPP = (numT%(valx+valy));
 
    return quantPP;
}

void calcExibeVC(int numTotalC, int precPU, int uniX, int uniY ){ 
    int define= quantasPrecP(numTotalC,uniX,uniY);
     int numX= numTotalC-define;
    int calc1= calcValor(numX,precPU);
    int calc2= calcValor(define,precPU)/2;
    int calcT= calc2+calc1;
    printf("%i unidades no preço normal --->R$%.2i\n", numX,calc1);
    printf("%i unidades pela metade do preço --->R$%.2i\n", define,calc2);
    printf("Valor total da compra: R$%.2i\n", calcT);

    return;
}

int main(){
    int numTo, precUnidade, unidadeX,unidadeY;
    printf("Digite o número total de unidades compradas:\n");
    scanf("%i", &numTo);
    printf("Digite o preço da unidade(EM R$)\nR$");
    scanf("%i", &precUnidade);
    printf("Digite o valor de unidades com preço normal:\n");
    scanf("%i", &unidadeX);
    printf("Digite o valor de unidades pela metade do preço:\n");
    scanf("%i", &unidadeY);
    calcExibeVC(numTo,precUnidade,unidadeX,unidadeY);


    return 0;
}