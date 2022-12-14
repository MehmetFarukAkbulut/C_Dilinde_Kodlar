#include<stdio.h>
#include<stdlib.h>
int main(void){
    float miktar,miktar1,bakiye=1000.0;
    int islem,parola,a,sex;
    char again='e';
    printf("ATBANK'a Hosgeldiniz!!\nSistem kontrol ediliyor...\n");
    printf("Parolanız bulunmamaktadır.\nLütfen bir parola belirleyiniz> \n");
    scanf("%d",&parola);printf("Parolanız kaydedilmiştir.\n");
    parolabasi:
    printf("İşlem yapabilmeniz için parolanızı giriniz> ");
    scanf("%d",&a);if(parola!=a){printf("Yanlış giriş yaptınız.\n");goto parolabasi;}else{
    printf("Şifreniz doğrudur.\n İşlemler:\n 1-Bakiye Sorgulama\n 2-Para Çekme\n 3-Para Yatırma\n");
    while(again=='e'){
    printf("Lütfen işleminizi giriniz>\n");scanf("%d",&islem);
    switch(islem){
        case 1:
        printf("Bakiyeniz %.2f ₺' dir.\n",bakiye);break;
        case 2:
        printf("Çekmek istediğiniz miktarı giriniz> \n");scanf("%f",&miktar);
        bakiye-=miktar;printf("Bakiyeniz %.2f ₺' dir.\n",bakiye);break;
        case 3:
        printf("Yatırmak istediğiniz miktarı giriniz> \n");scanf("%f",&miktar1);
        bakiye+=miktar1;printf("Bakiyeniz %.2f ₺' dir\n", bakiye);break;
        default:
        printf("Geçersiz bir işlemin girdiniz!\n");break;
    }
    printf(" Yeniden islem yapmak ister misiniz? e/h\n");scanf("%s",&again);
    }}
    printf("ATBANK İyi günler diler.\n");
}
