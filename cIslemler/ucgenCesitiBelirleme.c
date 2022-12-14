#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
    int ex,a,b,c,cevre;
    float alan;progbasi:
    printf("Üçgenin kenarlarını giriniz:\n a:");scanf("%d",&a);
    printf(" b:");scanf("%d",&b);printf(" c:");scanf("%d",&c);cevre=a+b+c;
    if(a== b && b==c){alan=sqrt(3)*pow(a,2)/4;
        printf("Eşkenar Üçgen.\nEşkenar Üçgenimizin Alanı:%.2f \nÇevresi:%d \n",alan,cevre);}
    else if(a!=b && b!=c && a!=c){printf("Çeşitkenar Üçgen.\nÇeşitkenar Üçgenimizin Çevresi:%d\n",cevre);}
    else {printf("İkizkenar Üçgen.\nİkizkenar Üçgenimizin Çevresi:%d\n",cevre);}
    
    
    
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






