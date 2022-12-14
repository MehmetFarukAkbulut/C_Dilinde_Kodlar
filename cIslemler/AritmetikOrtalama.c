#include <stdio.h>
#include <conio.h>
int main()
{
    int num,i,b;
    float average,a,sum;
    sum=0;
    
    ortbasi:
    printf("Ortalamasını almak istediğiniz sayı miktarını yazınız>\n");
    scanf("%f",&a);
    printf("Sayıları giriniz> \n");
    for(i=0;i<a;i++){
        printf("%d. sayıyı giriniz> ",i+1);
        scanf("%d", &num);
        sum += num;
    }
    average = (sum/a);
    printf("Girilen sayıların ortalaması: %f\n",average);
     printf("Program sonlansın mı? 0(H)/1(E)\n");
     scanf("%d",&b);
    if (b==0){
    printf("Program tekrar başlatılıyor..\n");
    goto ortbasi;
    }
    else if(b==1);{
        printf("Program sonlandırılıyor..\n");
        return 0;}
}



