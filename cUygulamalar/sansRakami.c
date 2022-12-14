#include <stdio.h>
#include<conio.h>
int main(){
    int num,b;
    sansbasi:
    printf("Şanslı rakamınızı giriniz>\n");
    scanf("%d",&num);
    switch (num)
    {
    case 0:
    printf("Bulunduğunuz yolda güvendesiniz\n");
        break;
    case 1:
    printf("Olumlu kalmak için çaba sarf etmelisiniz\n");
        break;
    case 2:
    printf("Zor zamanlarda bile iyimser olun\n");
        break;
    case 3:
    printf("Ruhsal rehberleriniz size sevgilerini sunuyor\n");
    break;
    case 4:
    printf("Size yardım teklif ediliyor\n");
    break;
    case 5:
    printf("Olumlu bir değişim yolundasınız, orada kalın\n");
    break;
    case 6:
    printf("Korkunuzu bırakın ve dengeyi bulun\n");
    break;
    case 7:
    printf("Yeni fırsatlara dikkat edin\n");
    break;
    case 8:
    printf("Başarılı olma yolundasınız\n");
    break;
    case 9:
    printf("Artık ihtiyacınız olan her şeye sahipsiniz\n");
    break;
    default:
    printf("Geçersiz değer girdiniz..\n");
  
    }
    printf("Program sonlansın mı? 0(H)/1(E)\n");
     scanf("%d",&b);
    if (b==0){
    printf("Program tekrar başlatılıyor..\n");
    goto sansbasi;
    }
    else (b==1);{
        printf("Program sonlandırılıyor..\n");
        return 0;}
}
