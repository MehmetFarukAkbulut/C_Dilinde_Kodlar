#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
    int ex;
    int rast,y,i;
printf("Sayi tahmini oyununa hosgeldiniz!");
progbasi:

printf("\n----------------------------------------------------------\n");
printf("Sayiyi tahmin etmek icin 6 hakkiniz var!");
i=1;
srand ( time(NULL) );
rast = rand() % 1000 + 1; //(1 ile 1000 arasında rastgele sayı)
do {

printf("\n----------------------------------------------------------\n");
printf("Lutfen 0-1000 arasinda bir sayi yazip Enter a basin: ");
scanf("%d", &y);
if(i<6){
if(y==rast) {
printf("\nTEBRiKLER!!! Sayiyi %d . hakkinizda tahmin ettiniz", i);
break;
}
if(y>rast) {
printf("Girdiniz sayi tahmin etmeniz gereken sayidan Buyuk.\nLutfen daha Kucuk bir sayiyla sansinizi deneyin.");
}
if(y<rast) {
printf("Girdiniz sayi tahmin etmeniz gereken sayidan Kucuk.\n Lutfen daha Buyuk bir sayiyla sansinizi deneyin.");
}
}
if(i==6) {
printf("\nHakkiniz bitti!!!\nBilmeniz gereken sayi %d sayisiydi.", rast);
}
i++;
} while(i!=7);

printf("\n----------------------------------------------------------\n");
//prog sonlandırıcı
    printf("Program sonlansın mı? 0(H)/1(E)\n");
     scanf("%d",&ex);
    if (ex==0){
    printf("Program tekrar başlatılıyor..\n");
    goto progbasi;
    }
    else (ex==1);{
        printf("Program sonlandırılıyor..\n");
        return 0;}
}






