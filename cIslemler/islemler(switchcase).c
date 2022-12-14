#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
    int i,q,a,ex,b;
    float sonuc,x,y,z;
    progbasi:
    sonuc=1.0;
    printf("Girmek istediğiniz sayı adedini giriniz(1,2,3)>\n");scanf("%d",&q);
switch(q){
case 1:
    case1basi:
     printf("Yapılmasını istediğiniz işlemi seçiniz:\n 1.Faktoriyel\n 2.Kare\n 3.Karekök\n 4. Ana menüye dön\n");scanf("%d",&a);
             if(a==4){ printf("Ana menüye dönülüyor..\n");goto progbasi;}
             else if(a<=0 || a>4){printf("Yanlış seçim yaptınız tekrar deneyiniz..\n");goto case1basi; }
             sayibasi:
            printf("Sayıyı giriniz:\n");scanf("%f",&x);
    switch(a){
        case 1:
            if(x<0) {printf("Hata: Negatif sayıların faktoriyeli yoktur.\n Lütfen Tekrar Deneyiniz...");goto sayibasi;}
            for(i=x; i>=1; i--){sonuc *= i;}break;
        case 2: sonuc=x*x;break;
        case 3: sonuc = sqrt(x);break;}x=0;break;
case 2:
        case2basi:
        printf("Yapılmasını istediğiniz işlemi seçiniz:\n 1.Toplama\n 2.Çarpma\n 3.Ortalama\n 4.Çıkarma\n 5.Bölme\n 6.Üssü alma\n 7.Ana menü\n")    ;
        scanf("%d",&a); if(a==7){ printf("Ana menüye dönülüyor..\n");goto progbasi;}
                     else if(a<=0 || a>7){printf("Yanlış seçim yaptınız tekrar deneyiniz..\n");goto case2basi; }
        printf("Sayıları giriniz:\n");scanf("%f %f",&x,&y);
    switch(a){
        case 1: sonuc=x+y;break;
        case 2: sonuc=x*y;break;
        case 3: b=x+y;sonuc=b/2;break;
        case 4: sonuc=x-y;break;
        case 5: sonuc=x/y;break;
        case 6: sonuc=pow(x,y);break;}x=0,y=0;break;      
case 3:
    case3basi:
        printf("Yapılmasını istediğiniz işlemi seçiniz:\n 1.Toplama\n 2.Çarpma\n 3.Ortalama\n 4.Ana menüye dön.\n")  ; 
        scanf("%d",&a); if(a==4){ printf("Ana menüye dönülüyor..\n");goto progbasi;}
                         else if(a<=0 || a>4){printf("Yanlış seçim yaptınız tekrar deneyiniz..\n");goto case3basi; }
        printf("Sayıları giriniz:\n");scanf("%f %f %f",&x,&y,&z);
    switch(a){
        case 1: sonuc=x+y+z;break;
        case 2: sonuc=x*y*z;break;
        case 3: b=x+y+z;sonuc=b/3;break;}x=0,y=0,z=0;break;
        default:printf("Yanlış seçim yaptınız tekrar deneyiniz..\n");goto progbasi;}             
    printf("İşlem sonucu:%.2f\n",sonuc);
    printf("Program sonlansın mı? 0(H)/1(E)\n");scanf("%d",&ex);
    if (ex==0){printf("Program tekrar başlatılıyor..\n");goto progbasi;}
    else (ex==1);{printf("Program sonlandırılıyor..\n");return 0;}
    }
