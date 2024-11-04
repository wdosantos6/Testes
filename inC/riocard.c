#include <stdio.h>


int main(){
    float ing,seg,ter,qui,sex,sab,total,sem;
    ing= 4.30;
    seg=4*ing*2;
    ter=2*ing;
    qui=3*ing;
    sex=4*ing;
    sab=2*ing;
  
    printf("Quantas semanas para o gasto do transporte?\n");
    scanf("%f", &sem);
    total=(seg+ter+qui+sex+sab)*sem;
    printf("o valor por semana gasto é de R$ %.2f",total);



        return 0;
    }
   