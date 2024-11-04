/*
Função recebe peso e altura de um produto e o classifica da seguinte forma:(peso//altura)
Menor que 50 && menos de 150=pequeno
Menos que 50 && 150 ou mais = médio
50 a 100 && menos de 150 = médio
50 a 100 && 150 ou mais = grande
mais que 100 =grande
*/


#include <stdio.h>
#include <locale.h>
float classificaProd(float peso,float altura){
    if(peso< 50 && altura <150){
        printf("\nO produto é pequeno");
        
    }
    if(peso<=100  && altura <150 || 50>peso<=100 && altura>150){
        printf("\nO produto é médio");
        
    }
    else{
        printf("\nO produto é grande");
    }
    return 0;
}




int main(){
    float peq,med,gra;
    
   peq= classificaProd(49,140);
   med= classificaProd(45, 160);
   gra = classificaProd(120,150);
   
    return 0;
}