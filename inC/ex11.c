#include <stdio.h>

int main(void)
{
    int dias,sem,d;


printf("Qual a quantidade de dias?");
scanf("%d", &dias);
sem=dias/7;
d=dias%7;
printf("%d semanas e %d dias", sem,d);
    return 0;
}