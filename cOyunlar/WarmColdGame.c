#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
    int ex,hak,t,rs;
    progbasi:
    srand(time(NULL));
hak=5;
 rs = rand()%10;
 printf("Tuttuğum 0 ile 10 arasındaki sayıyı bulun: \n ");
while(hak>0)
{
printf("Tahmin : "); scanf("%d",&t);
hak--;
if(rs==t)
{
printf("Tebrikler :) \n");
break;
}
else if(abs(t-rs)<=2)
{
printf("Cok Sicak \n Hakkiniz : %d \n",hak);
}
else if(abs(t-rs)<=4)
{
printf("Ilik \n Hakkiniz : %d \n",hak);
}
else if(abs(t-rs)<=6)
{
printf("Soguk \n Hakkiniz : %d \n",hak);
}
else
{
printf("Cok Soguk \n Hakkiniz : %d \n",hak);
}
}
printf("Rastgele Sayi : %d \n ",rs);
    
    
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






