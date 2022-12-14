#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){int vizsay,pass;int b;
    float vize, final,finalson,vizeson;
    float yuzdev,yuzdevbig, yuzdef,dersson;
    progbasi:
    dersson=0,yuzdef=0,yuzdevbig=0,vizeson=0;
    printf("Dersin geçme puanı kaçtır>\n");scanf("%d",&pass);
    printf("Öğrencinin kaç vizesi vardır>\n");scanf("%d",&vizsay);
    for(int i=1;i<=vizsay;i++){
        printf("%d. vizenin ders notuna yüzde etkisini yazınız>\n",i);scanf("%f",&yuzdev);
        printf("%d. vizenin notunu yazınız>\n",i);scanf("%f",&vize);
        vizeson+=(vize*yuzdev)/100;
        yuzdevbig+=yuzdev;
    }
    yuzdef=(100-yuzdevbig);
    printf("Final notunu yazınız>\n");scanf("%f",&final);finalson=(final*yuzdef)/100;
    dersson=vizeson+finalson;
    printf("Ders notunuz %.2f\n",dersson);
    if(dersson>=pass){
        printf("Tebrikler!! Dersi Başarıyla geçtiniz.\n");
    }
    else{printf("Dersten kaldınız. Seneye tekrar deneyiniz.\n");}
    
    
        printf("Program sonlansın mı? 0(H)/1(E)\n");
        scanf("%d",&b);
    if (b==0){
    printf("Program tekrar başlatılıyor..\n");
    goto progbasi;
    }
    else (b==1);{
        printf("Program sonlandırılıyor..\n");
        return 0;}
}


