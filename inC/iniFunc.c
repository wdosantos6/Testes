/*
criar um programa que tem como entrada 3 pontos quaisquer de um plano formando um triângulo
x1,x2,y1,y2 do ponto a,b,c
calcule esse valor e mostre o perímetro do triângulo,calculado por dAB+dBC+dAC
Fórmula da distancia 
d=sqrt(x1-x2)^2+(y1+y2)^2
Além disso,adicionar a moldura "================================="
*/

#include <stdio.h>
#include <math.h>

float calDistancia(float x1,float y1,float x2, float y2){
    float dist= sqrt(pow((x1-x2),2.0)+ pow((y1-y2),2.0));

    return dist;
}

float calcPerim(float xA, float yA,float xB, float yB,float xC,float yC){

    float dAB,dBC,dAC;
    dAB=calDistancia(xA,yA,xB,yB);
    dBC=calDistancia(xB,yB,xC,yC);
    dAC=calDistancia(xA,yA,xC,yC);
    float perim=dAB+dAC+dBC;

    return perim;
}
void moldura(){
    printf("\n===================================");
     printf("\n===================================");
    return;
}

int main(){
    float xA,yA,xB,yB,xC,yC,total;
    printf("Digite as coordenadas do ponto A:\n");
    scanf("%f %f", &xA,&yA);
    printf("Digite as coordenadas do ponto B:\n");
    scanf("%f %f", &xB,&yB);
    printf("Digite as coordenadas do ponto C:\n");
    scanf("%f %f", &xC,&yC);
     total=calcPerim(xA,yA,xB,yB,xC,yC);

     moldura();
     printf("\n\n\tPerímetro é igual a :%.2f",total );
     moldura();   
    return 0;
}