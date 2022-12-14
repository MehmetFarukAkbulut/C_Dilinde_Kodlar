#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){//tanımlayıcılar
    int ex,i,sayi;
    
    progbasi://prog satırları
    printf("Rastgele bir sayı giriniz:\n");scanf("%d",&sayi);
            printf("Girdiğiniz %d sayısı ",sayi);
            for(i=1;i<10;i++){
            if((sayi%i)==0){printf("%d ile ",i);}
            }printf("bölünür.\n");
    
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



