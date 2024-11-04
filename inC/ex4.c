#include <stdio.h>
int main(void)
{
float metro;
float cm;
printf("Qual a sua altura? (em centímetros)\n");
scanf("%f", &cm);
metro= cm/100;
printf("Sua altura em metros equivale a: %.2f m", metro);


    return 0;
}