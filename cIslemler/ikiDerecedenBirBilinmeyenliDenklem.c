#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
        int main(){//tanımlayıcılar
        int ex;
        int a,b,c,d;
        float x1,x2;
                progbasi://prog satırları
                            printf("a : "); scanf("%d",&a);printf("b : "); scanf("%d",&b);printf("c : "); scanf("%d",&c);
                            d = (pow(b,2))-(4*a*c);printf("Delta : %d \n\n",d);
                    if(d<0){printf("Reel Kok Yoktur \n");}
                    else if(d==0){x1 = -b/(2*a);x2 = x1;
                            printf("x1 : %.2f - x2 : %.2f \n",x1,x2);}
                    else{x1 = (-b+sqrt(d))/(2*a);x2 = (-b-sqrt(d))/(2*a);
                            printf("x1 : %.2f - x2 : %.2f \n",x1,x2);}   

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
