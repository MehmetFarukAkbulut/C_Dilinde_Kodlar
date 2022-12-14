#include <conio.h>  
#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
#include <math.h>   
#include <time.h>   
   
int artik_yil(int);
int main(){int topLam;
    int ex, gun, ay, yiL;
    progbasi: 
    topLam=0;
    printf("Araştırmak istediğiniz tarihi Gün Ay Yıl şeklinde yazın> \n");scanf("%d %d %d",&gun,&ay,&yiL);
    int i;
    for (i=1;i<ay;i++){
        if (i<=7){
            if(i==2){
                topLam=topLam+28+artik_yil(yiL);
            }
            else if (i%2==0){
                topLam=topLam+30;
            }
            else{
                topLam=topLam+31;
            }
        }
        else{
            if (i%2==0){
                topLam=topLam+31;
            }
            else{
                topLam=topLam+30;
            }
        }
    }
    topLam+=gun;
    printf("%d/%d/%d tarihi %d yilinin %d. gunu!\n",gun,ay,yiL,yiL,topLam);
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

int artik_yil(int yiL)
{
    if( yiL%4==0 && yiL%100!=0 || yiL%400==0 ){
        return 1;
}
    else {
        return 0;
    }
}




