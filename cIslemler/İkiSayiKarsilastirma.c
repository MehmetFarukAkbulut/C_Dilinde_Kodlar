#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("2 sayı giriniz> ");
    scanf( "%d %d", &a ,&b);
    if (a>b){
    printf("%d, %d'den %d kadar büyüktür", a,b,a-b);
    }
    else if(b>a){
        printf("%d, %d'dan %d kadar büyüktür",b,a,b-a);
    }
    else if(a==b){
        printf("%d ile %d eşittir",a,b);
    }
    else {
        printf("Geçersiz karakter kullandınız ");
    }
getchar();
return 0;
}


