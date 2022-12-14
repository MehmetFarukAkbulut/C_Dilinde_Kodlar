#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){//tanımlayıcılar
    const float pi=3.14;
    int ex;
    float alan,hacim,cevre,a,b,c,r,h;
    int islem,sekil1,sekil2;
    
    progbasi://prog satırları
            secim:
    printf("Yapmak istediğiniz işlemi seçiniz>\n 1-Hacim\n 2-Alan&Çevre\n");scanf("%d",&islem);
    switch(islem){
        case 1:
        {sekil1:
            printf("Hangi Şeklin Hacmini almak istersiniz>\n 1-Dikdörtgenler prizması(ve ya Küp)\n 2-Küre\n");
            printf(" 3-Silindir\n 4-Koni\n 5-Düz Kare Piramit\n 6-Ana menüye dön\n");scanf("%d",&sekil1);
            switch(sekil1){
                case 1:{printf("Dikdörtgenler prizmasının kenarlarının değerini cm cinsdinden yazınız>\n");scanf("%f %f %f",&a,&b,&c);hacim=a*b*c;
                printf("Dikdörtgenler prizmasının Hacmi %.2f cm^3'tür\n",hacim);
                    break;
                }
                case 2:{printf("Kürenin Yarıçapını cm cinsdinden yazınız>\n");scanf("%f",&r);hacim=4/3*pi*pow(r,3);
                    printf("Kürenin Hacmi %.2f cm^3'tür\n",hacim);
                    break;
                }
                case 3:{printf("Silindirin Taban yarıçapını ve yüksekliğini cm cinsdinden yazınız>\n");scanf("%f %f",&r,&h);hacim=pi*pow(r,2)*h;
                    printf("Silindirin Hacmi %.2f cm^3'tür\n",hacim);
                    break;
                }
                case 4:{printf("Koninin Taban yarıçapını ve yüksekliğini cm cinsdinden yazınız>\n");scanf("%f %f",&r,&h);hacim= 1/3*pi*pow(r,2)*h;
                    printf("Koninin Hacmi %.2f cm^3'tür\n",hacim);
                    break;
                }
                case 5:{printf("Düzgün Kare Piramitin tabanının kenar uzunluğunu ve yüksekliğini cm cinsdinden yazınız>\n");scanf("%f %f",&a,&h);hacim=1/3*pow(a,2)*h;
                    printf("Düzgün Kare Piramitin Hacmi %.2f cm^3'tür\n",hacim);
                    break;
                }
                case 6:{
                    printf("Ana menüye Yönlendiriliyorsunuz..\n");goto secim;
                }hacim=0,a=0,b=0,c=0,r=0,h=0;
                default: 
                      printf("Yanlış seçim yaptınız.Tekrar Deneyiniz.. \n");goto sekil1;
                }
          break;   }
           
        case 2:
        {sekil2:
            printf("Hangi Şeklin Alanını ve Çevresini almak istersiniz>\n 1-Dikdörtgen(ve ya Kare)\n 2-Üçgen\n");
            printf(" 3-Daire (Çember)\n 4-Ana menüye dön\n");scanf("%d",&sekil2);
            switch(sekil2){
                case 1:{printf("Dikdörtgenin kenarlarının değerini cm cinsdinden yazınız>\n");scanf("%f %f",&a,&b);
                printf("Dikdörtgenin alanı %.2f cm^2 ve çevresi %.2f cm'dir\n",a*b,2*(a+b));
                    break;
                }
                case 2:{printf("Üçgenin kenarlarının değerini ve ilk kenardan olan yüksekliğini cm cinsdinden yazınız>\n");scanf("%f %f %f %f",&a,&b,&c,&h);
                printf("Üçgenin alanı %.2f cm^2 ve çevresi %.2f cm'dir\n",a*h/2,a+b+c);
                    break;
                }
                case 3:{printf("Dairenin Yarıçapını cm cinsdinden yazınız>\n");scanf("%f",&r);alan=pi*pow(r,2);cevre=2*pi*r;
                printf("Dairenin alanı %.2f cm^2 ve çevresi %.2f cm'dir\n",alan,cevre);
                    break;
                }
                case 4:
                {   printf("Ana menüye Yönlendiriliyorsunuz..\n");goto secim;}alan=0,cevre=0,a=0,b=0,c=0,r=0,h=0;
                 default: 
                      printf("Yanlış seçim yaptınız.Tekrar Deneyiniz.. \n");goto sekil2;
                }
                
            
            break;
        }
        default:
        {
            printf("Yanlış seçim yaptınız.Tekrar Deneyiniz.. \n");goto secim;
        }
    }
    
    
    
    
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




