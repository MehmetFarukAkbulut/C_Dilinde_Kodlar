#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
int main(){//tanımlayıcılar
    char a[100], b[100],c[100];
    printf("Parolanızı Girin:\n");gets(a);
    printf("Tekrar Girin:\n");gets(b);
    if (strcmp(a,b) == 0){printf("Parolanız Kaydedilmiştir\nParolanız:%s\n",a);}
    else printf("Parolanız uyuşmuyor. Lütfen Tekrar Deneyiniz.\n");return 0;}
