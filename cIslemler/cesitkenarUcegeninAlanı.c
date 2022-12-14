#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
    int ex;
   int s1, s2, angle;
   float area;
  progbasi:
   printf("\nEnter Side1 : ");
   scanf("%d", &s1);
  
   printf("\nEnter Side2 : ");
   scanf("%d", &s2);
  
   printf("\nEnter included angle : ");
   scanf("%d", &angle);
  
   area = (s1 * s2 * sin((M_PI / 180) * angle)) / 2;
  
   printf("\nArea of Scalene Triangle : %.2f", area);
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







