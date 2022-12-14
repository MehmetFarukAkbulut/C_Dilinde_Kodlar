#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int k,ex,sayi,ilksayi,toplam; progbasi:
    toplam=0,sayi=0;
printf("Bir sayı gir sana rakamları toplamını söyliyim> \n");scanf("%d",&sayi);ilksayi=sayi;
while (sayi>0){k=sayi%10;toplam+=k;sayi/=10;}
    printf("%d sayısının rakamları toplamı %d dir\n",ilksayi,toplam);
    printf("Program sonlansın mı? 0(H)/1(E)\n");scanf("%d",&ex);
    if (ex==0){printf("Program tekrar başlatılıyor..\n");goto progbasi;}
    else (ex==1);{printf("Program sonlandırılıyor..\n");return 0;}
}
