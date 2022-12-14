#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   float kilo;
float boy;
float vki;
printf("Kilonuzu giriniz: ");
scanf("%f",&kilo);
printf("Boyunuzu giriniz (cm cinsinden): ");
scanf("%f",&boy);
vki = kilo/pow(boy/100,2);
printf("Vucut kitle indeksiniz %.2f\n",vki);
printf("Durumunuz: ");
if(vki<=18.5){
printf("Zayıf\n");
printf("%.2f kilogram almanız gerekiyor",(18.5*pow(boy/100,2)-kilo));
}
else if(vki<=24.9){
printf("Normal\n");        }
else if(vki<=29.9){
printf("Fazla kilolu\n");
printf("%.2f kilogram vermeniz gerekiyor",kilo-(24.9*pow(boy/100,2)));
}
else if(vki<=39.9){
printf("Obez\n");
printf("%.2f kilogram vermeniz gerekiyor",kilo-(24.9*pow(boy/100,2)));
}
else {
printf("Aşırı obez\n");
printf("%.2f kilogram vermeniz gerekiyor",kilo-(24.9*pow(boy/100,2)));
}
}
