#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){//tanımlayıcılar
int ex, sayi,deger,cvb;
progbasi:
printf("*-*-*OYUN BASLIYOR*-*-*\n\n");
printf("Lutfen 1-1000 arasinda bir sayi giriniz=> "); scanf("%d",&sayi);
srand(time(NULL));
deger=1+rand()%1000;
printf("Girdiginiz sayi=> %d olabilirmi?\n",deger);
printf("(Doğru=1-Büyük=2-Küçük=3)=>"); scanf("%d", &cvb);


if (cvb==1)
bas1: printf("*-*-*Oyun Bitmistir.*-*-*\n");


else if (cvb==2)
{
bas2: srand(time(NULL));
deger=deger+rand()%(1001-deger);
printf("Girdiginiz sayi=> %d olabilirmi?\n",deger);
bas: printf("(Doğru=1-Büyük=2-Küçük=3)=>"); scanf("%d", &cvb);
if (cvb==1)
goto bas1;
else if (cvb==2)
goto bas2;
else if (cvb==3)
goto bas3;
}


else if (cvb==3)
{
bas3: srand(time(NULL));
deger=1+rand()%deger;
printf("Girdiginiz sayi=> %d olabilirmi?\n",deger);
printf("(Doğru=1-Büyük=2-Küçük=3)=>"); scanf("%d", &cvb);
if (cvb==1)
goto bas1;
else if (cvb==2)
goto bas2;
else if (cvb==3)
goto bas3;
}


else
{
printf("Lutfen (Doğru=1-Büyük=2-Küçük=3) seceneklerinden birini seciniz!...\n");
goto bas;
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




