#include <stdio.h>
int main(void)
{
float b,h,total;
printf("insira a altura do quadro:");
scanf("%f", &h);
printf("insira a largura do quadro:");
scanf("%f", &b);
total= b * h;
printf("Serão necessários %.1f metros para emoldurar o quadro.", total);
    return 0;
}