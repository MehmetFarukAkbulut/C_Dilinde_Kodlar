#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
    int ex,birim;float a,adet,deste,duzine,cift;
    progbasi:
    printf("Girmek istediğiniz birimi seçin\n 1-Adet\n 2-Deste\n 3-Düzine\n 4-Çift\n");scanf("%d",&birim);
    if(birim<1 || birim>4){printf("Yanlış seçim yaptınız. Tekrar Deneyiniz\n");goto progbasi;}
    printf("Diğer birimlere çevirmek istediğiniz miktarı yazınız>\n");scanf("%f",&a);
    switch(birim){
        case 1:{//a tane adetimiz var 
        adet=a;deste=a/10;duzine=a/12;cift=a/2;
        break;}
        case 2:{//a tane destemiz var 
        adet=a*10;deste=a;duzine=a*10/12;cift=a*5;
        break;}
        case 3:{//a tane düzinemiz var 
        adet=a*12;deste=a*1.2;duzine=a;cift=a*6;
        break;}
        case 4:{//a tane çiftimiz var 
        adet=a*2;deste=a/5;duzine=a/6;cift=a;
        break;}
    }
    printf("Adet Çevirici:\n %.2f adet\n %.2f deste\n %.2f düzine\n %.2f çift bulunmaktadır.\n",adet,deste,duzine,cift);
    
    
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






