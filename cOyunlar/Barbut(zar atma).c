#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int zarAtma(void);

int main()
{
    int oyunDurumu, ex, toplam, oyuncuPuani, bakiye, bahis, kontrol=1;
    progbasi:
    bakiye=1000;
    do
    {

        kontrol = 1;

        do
        {
            printf("Bakiyeniz : %d\nKac liralik bahis oynamak istiyorsunuz : ", bakiye);  scanf("%d", &bahis);

            if(bahis > bakiye)
                printf("Lutfen bakiyeniz kadar bahis oynayin.\n");
            else
                kontrol=30;
        }while(kontrol <= 1);
        
        srand(time(NULL));
        toplam = zarAtma();                         //zarın ilk atılışı

        switch(toplam)
        {
            case 7: case 11:             //ilk atışta kazanma
                oyunDurumu = 1;         
                break;
            
            case 2: case 3: case 12:     //ilk atışta kaybetme
                oyunDurumu = 2;
                break;
            
            default:                     //hatırlatma noktası
                oyunDurumu = 0;
                oyuncuPuani = toplam;
                printf("\t\t\t\tOyuncunun kazanacagi zar : %d\n", oyuncuPuani);
                break;
        }

        while(oyunDurumu == 0)
        {                     //Zar atmaya devam
            toplam = zarAtma();

            if(toplam == oyuncuPuani)  //kazanılacak zar atma
                oyunDurumu = 1;
            else if(toplam == 7)        //kaybedilecek zar atma -7-
                oyunDurumu = 2;
        }          

        if(oyunDurumu == 1)
        {
            printf("\t\t\t\tOyunu Kazandiniz!!\n\n\n");
            bakiye += bahis;
        }
        else
        {
            printf("\t\t\t\tOyunu Kaybettiniz..\n\n\n");
            bakiye -= bahis;
        }

    }while(bakiye >= 1);
    
    printf("Bakiye SIFIRLANDI\t GAME OVER\t KAYBETTINIZ\n\n\n");

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


int zarAtma(void)
{
    int zar1, zar2, toplamZar;
    
    zar1 = 1 + (rand()%6);
    zar2 = 1 + (rand()%6);
    toplamZar = zar1 + zar2;
    printf("Oyuncu-- %d + %d = %d --atti\n",zar1,zar2,toplamZar);
    return toplamZar;
}


