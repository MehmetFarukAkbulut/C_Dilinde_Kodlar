#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
int ex;
int secim;
int i;
int win =0;
int lose =0;
   progbasi:
   /*Makas Kağıdı keser, Kağıt Taşı kaplar, Taş Kertenkeleyi ezer,
   Kertenkele Spock'ı zehirler, Spock Makası ezer, Makas Kertenkelenin başını keser,
   Kertenkele Kağıdı yer, Kağıt Spock'ı geçersizleştirir,
   Spock Taşı buharlaştırır ve sonunda Taş Makası kırar.*/
srand(time(NULL));
printf("Makas(1), Kağıt(2),Taş(3),Kertenkele(4),Spock(5)\nOyununa Hoşgeldin\n");
for(i=0;i<5;i++){secimbasi:
printf("Secimini Gir:\n");scanf("%d",&secim);int bilgisayar=rand()%5+1;
switch(secim){
case 1:
if(bilgisayar==1){printf("Berabere \n");}
else if(bilgisayar==2){printf("Makas Kağıdı keser. Kazandın\n");win++;}
else if(bilgisayar==3){printf("Taş Makası kırar. Kaybettin\n");lose++;}
else if(bilgisayar==4){printf("Makas Kertenkelenin başını keser. Kazandın\n");win++;}
else if(bilgisayar==5){printf("Spock Makası ezer. Kaybettin\n");lose++;}
case 2:
if(bilgisayar==2){printf("Berabere \n");}
else if(bilgisayar==3){printf("Kağıt Taşı kaplar.Kazandın\n");win++;}
else if(bilgisayar==1){printf("Makas Kağıdı keser.Kaybettin\n");lose++;}
else if(bilgisayar==4){printf("Kertenkele Kağıdı yer.Kaybettin\n");lose++;}
else if(bilgisayar==5){printf("Kağıt Spock'ı geçersizleştirir.Kazandın\n");win++;}
case 3:
if(bilgisayar==3){printf("Berabere \n");}
else if(bilgisayar==2){printf("Kağıt Taşı kaplar.Kaybettin\n");lose++;}
else if(bilgisayar==1){printf("Taş Makası kırar.Kazandın\n");win++;}
else if(bilgisayar==4){printf("Taş Kertenkeleyi ezer.Kazandın\n");win++;}
else if(bilgisayar==5){printf("Spock Taşı buharlaştırır.Kaybettin\n");lose++;}
case 4:
if(bilgisayar==4){printf("Berabere \n");}
else if(bilgisayar==2){printf("Kertenkele Kağıdı yer.Kazandın\n");win++;}
else if(bilgisayar==1){printf("Makas Kertenkelenin başını keser.Kaybettin\n");lose++;}
else if(bilgisayar==3){printf("Taş Kertenkeleyi ezer.Kaybettin\n");lose++;}
else if(bilgisayar==5){printf("Kertenkele Spock'ı zehirler.Kazandın\n");win++;}
case 5:
if(bilgisayar==5){printf("Berabere \n");}
else if(bilgisayar==2){printf("Kağıt Spock'ı geçersizleştirir.Kaybettin\n");lose++;}
else if(bilgisayar==1){printf("Spock Makası ezer.Kazandın\n");win++;}
else if(bilgisayar==3){printf("Spock Taşı buharlaştırır.Kazandın\n");win++;}
else if(bilgisayar==4){printf("Kertenkele Spock'ı zehirler.Kaybettin\n");lose++;}
if(secim<1 || secim>5)printf("Hatali Giris Yaptin.Tekrar Dene\n");}}
if(win < lose ){printf("Bilgisayar %d - %d Kazandi \n",lose,win);}
else if(lose < win ){printf("Oyuncu %d - %d Kazandi \n",win,lose);}
else if(lose =  win ){
printf("Kazanan Yok Berabere \n");}//prog sonlandırıcı
printf("Program sonlansın mı? 0(H)/1(E)\n");scanf("%d",&ex);
if (ex==0){printf("Program tekrar başlatılıyor..\n");goto progbasi;}
else (ex==1);{printf("Program sonlandırılıyor..\n");
return 0;}}



