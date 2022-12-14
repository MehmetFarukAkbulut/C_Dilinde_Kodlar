#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
    int ex;
    long int sayi1,sayi2,ebob,ekok;
    progbasi:ebob=1,ekok=1;
    printf("1.Sayiyi giriniz: ");
    scanf("%ld",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%ld",&sayi2);
     
    for(int i = 2; i < sayi1 && i < sayi2; i++)
    {
        if(sayi1 % i == 0 && sayi2 % i == 0){ // iki sayıyıda tam bölmesi lazım.
            printf("Ortak bolenler = %d\n",i);
            ebob = i;
        }
    }
    ekok = (sayi1 * sayi2) / ebob;
    printf("\nSayilarin EKOK'u = %ld",ekok);
    printf("\nSayilarin EBOB'u = %ld",ebob);
    
    
    //prog sonlandırıcı
    printf("\nProgram sonlansın mı? 0(H)/1(E)\n");
     scanf("%d",&ex);
    if (ex==0){
    printf("Program tekrar başlatılıyor..\n");
    goto progbasi;
    }
    else (ex==1);{
        printf("Program sonlandırılıyor..\n");
        return 0;}
}





