#include <stdio.h>  
#include <stdlib.h>
int main(){   

       int i,b,a,toplam=0;
       progbasi:
        printf("Öncesini toplamak istediğiniz sayıyı giriniz> \n ");
        scanf("%d",&a);
        for (i=1;i<=a;i++){toplam += i;}
        printf("1'den %d'e kadar olan sayilarin toplami = %d'dir..\n",a,toplam);
   
        printf("Program sonlansın mı? 0(H)/1(E)\n");
        scanf("%d",&b);
        if (b==0){
        printf("Program tekrar başlatılıyor..\n");
        goto progbasi;}
        else (b==1);{
        printf("Program sonlandırılıyor..\n");
        return 0;}
}
