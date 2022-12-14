#include<stdlib.h>
#include <stdio.h>
#include<time.h>
void main()
{

int sayi=0,tahmin=0;
int kackez=0;
int b;
progbasi:
srand(time(NULL));
sayi=rand()%100+1;
printf("Tahmin Ettigim Sayiyi Bulabilecek Misin?\nTahminin:");
scanf("%d", &tahmin);
while(tahmin!=sayi)
{
if(tahmin<sayi)
{
printf("Yanlis Tahmin.Daha Buyuk Sayi Tahmin Etmelisin!\nYeni Tahminin:");
scanf("%d", &tahmin);
kackez++;
}
if(tahmin>sayi)
{
printf("Yanlis Tahmin.Daha Kucuk Sayi Tahmin Etmelisin!\nYeni Tahminin:");
scanf("%d", &tahmin);
kackez++;
}
if(tahmin==sayi)
{
printf("Tebrikler %d Defada Bildiniz.\n",kackez+1);
}
}
printf("Tebrikler %d Sayisini %d Defada Bildiniz.\n", sayi, kackez+1);
kackez=0;

  printf("Program sonlansın mı? 0(H)/1(E)\n");
     scanf("%d",&b);
    if (b==0){
    printf("Program tekrar başlatılıyor..\n");
    goto progbasi;
    }
    else (b==1);{
        printf("Program sonlandırılıyor..\n");}
 
}

