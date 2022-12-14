/*kullanıcının girdiği sayının tam bölenleri
varsa bölenlerini yazıp asal olup olmadığını bulan program. */
#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
    int ex;
int a[100];
int num, i, count;
progbasi:
count = 0;
 
printf("Bir Sayı Giriniz>\n");
scanf("%d", &num);
printf("%d sayısı ",num); 
for (i = 2; i <= num / 2; i++) {
if (num % i == 0) {
printf("%d ile ",i);
count++;
}

}
 
if (count == 0)
printf("%d Sayısı Asaldır.\n", num);
else {printf("tam bölünüyor.\nBu Yüzden ");
printf("%d Sayısı Asal Değildir.\n", num);}




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


