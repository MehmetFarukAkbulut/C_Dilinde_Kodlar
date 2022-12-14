#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
    int i,q,a,w,b;
    float sonuc,x,y,z;
    progbasi:
    sonuc=1.0;
    printf("Girmek istediğiniz sayı adedini giriniz(1,2,3)>\n");scanf("%d",&q);
if(q==1){//1adet
    printf("Yapılmasını istediğiniz işlemi seçiniz:\n 1.Faktoriyel\n 2.Kare\n 3.Karekök\n 4. Ana menüye dön\n");scanf("%d",&a);
    if(a>=4){printf("Ana menüye dönülüyor..\n");goto progbasi;}
    sayibasi:
    printf("Sayıyı giriniz:\n");scanf("%f",&x);
    if(a<=1){if(x<0) {printf("Hata: Negatif sayıların faktoriyeli yoktur.\n Lütfen Tekrar Deneyiniz...");goto sayibasi;}
        for(i=x; i>=1; i--){sonuc *= i;}}  
    else if(a==2)sonuc=x*x;
    else if(a==3){sonuc = sqrt(x);}x=0;}
else if(q==2){//2 adet
        printf("Yapılmasını istediğiniz işlemi seçiniz:\n 1.Toplama\n 2.Çarpma\n 3.Ortalama\n 4.Çıkarma\n 5.Bölme\n 6.Üssü alma\n 7.Ana menü\n")    ;
        scanf("%d",&a);
         if(a>=7){printf("Ana menüye dönülüyor..\n");goto progbasi;}
        printf("Sayıları giriniz:\n");
        scanf("%f %f",&x,&y);
        if(a<=1)sonuc=x+y;
        else if(a==2)sonuc=x*y;
        else if(a==3){b=x+y;sonuc=b/2;}
        else if(a==4)sonuc=x-y;
        else if(a==5)sonuc=x/y;
        else if(a==6){sonuc=pow(x,y);}x=0,y=0; }
else if(q==3){//3adet
    printf("Yapılmasını istediğiniz işlemi seçiniz:\n 1.Toplama\n 2.Çarpma\n 3.Ortalama\n 4.Ana menüye dön.\n")  ; scanf("%d",&a);
    if(a>=4){printf("Ana menüye dönülüyor..\n");goto progbasi;}
    printf("Sayıları giriniz:\n");scanf("%f%f%f",&x,&y,&z);
    if(a<=1)sonuc=x+y+z;
    else if(a==2)sonuc=x*y*z;
    else if(a==3){b=x+y+z;sonuc=b/3;}
    x=0,y=0,z=0;}
    else{printf("Yanlış seçim yaptınız tekrar deneyiniz..\n");goto progbasi;}
    printf("İşlem sonucu:%.2f\n",sonuc);
    printf("Program sonlansın mı? 0(H)/1(E)\n");scanf("%d",&w);
    if (w==0){printf("Program tekrar başlatılıyor..\n");goto progbasi;}
    else (w==1);{printf("Program sonlandırılıyor..\n");return 0;}
}
