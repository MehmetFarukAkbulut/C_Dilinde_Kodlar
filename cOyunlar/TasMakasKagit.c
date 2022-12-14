#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{int b;
int T=1;
int K=2;
int M=3;
int i;
int Oyuncu =0;
int Bilgisayar =0;
int secim;
progbasi:
srand(time(NULL));
printf("Tas=1 , Kagit= 2, ve Makas= 3\n");
for(i=0;i<5;i++){
printf("Seciminizi Girin:\n");
scanf("%d",&secim);
int bilgisayar=rand()%3+1;
if(secim==1){
if(bilgisayar==1){
printf("Berabere Bitti\n");
}
else if(bilgisayar==2){
printf("Kağıt(2) taşı(1) sarar. Bilgisayar Kazandi\n");
Bilgisayar= Bilgisayar + 1;
}
else if(bilgisayar==3){
printf("Taş(1) makası(3) kırar. Oyuncu Kazandi\n");
Oyuncu = Oyuncu + 1;
}
}
else  if(secim==2){
if(bilgisayar==2){
printf("Berabere Bitti\n");
}
else if(bilgisayar==3){
printf("Makas(3) kağıtı(2) keser. Bilgisayar Kazandi\n");
Bilgisayar= Bilgisayar + 1;
}
else if(bilgisayar==1){
printf("Kağıt(2) taşı(1) sarar. Oyuncu Kazandi\n");
Oyuncu = Oyuncu + 1;
}
}
else if(secim==3){
if(bilgisayar==3){
printf("Berabere Bitti\n");
}
else if(bilgisayar==2){
printf("Makas(3) kağıtı(2) keser. Oyuncu Kazandi\n");
Oyuncu = Oyuncu + 1;
}
else if(bilgisayar==1){
printf("Taş(1) makası(3) kırar. Bilgisayar Kazandi\n");
Bilgisayar= Bilgisayar + 1;
}
}
else{
printf("Hatali Giris Yaptiniz\n");
}
}
if(Bilgisayar > Oyuncu ){
printf("Bilgisayar %d - %d Kazandi \n",Bilgisayar,Oyuncu);
}
else if(Bilgisayar < Oyuncu ){
printf("Oyuncu %d - %d Kazandi \n",Oyuncu,Bilgisayar);
}
else if(Bilgisayar =  Oyuncu ){
printf("Kazanan Yok Berabere \n");
}


  printf("Program sonlansın mı? 0(H)/1(E)\n");
     scanf("%d",&b);
    if (b==0){
    printf("Program tekrar başlatılıyor..\n");
    goto progbasi;
    }
    else (b==1);{
        printf("Program sonlandırılıyor..\n");
        return 0;}
}
