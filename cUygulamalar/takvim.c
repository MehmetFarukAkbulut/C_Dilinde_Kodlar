#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int fm(int date, int month, int year) {
   int fmonth, leap;
 
   //leap function 1 for leap & 0 for non-leap
   if ((year % 100 == 0) && (year % 400 != 0))
      leap = 0;
   else if (year % 4 == 0)
      leap = 1;
   else
      leap = 0;
 
   fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))
         + (5 * month + month / 9) / 2;
 
   //bring it in range of 0 to 6
   fmonth = fmonth % 7;
 
   return fmonth;
}
 
//----------------------------------------------
int day_of_week(int date, int month, int year){
   int dayOfWeek;
   int YY = year % 100;
   int century = year / 100;
    progbasi: 
   printf("\nDate: %d/%d/%d \n", date, month, year);
 
   dayOfWeek = 1.25 * YY + fm(date, month, year) + date - 2 * (century % 4);
 
   //remainder on division by 7
   dayOfWeek = dayOfWeek % 7;
 
   switch (dayOfWeek) {
      case 0:
         printf("Tarihi günüdür Pazartesi");
         break;
      case 1:
         printf("Tarihi günüdür Salı");
         break;
      case 2:
         printf("Tarihi günüdür Çarşamba");
         break;
      case 3:
         printf("Tarihi günüdür Perşembe");
         break;
      case 4:
         printf("Tarihi günüdür Cuma");
         break;
      case 5:
         printf("Tarihi günüdür Cumartesi");
         break;
      case 6:
         printf("Tarihi günüdür Pazar");
         break;
   }
   printf("\n");
    return 0; }
//------------------------------------------
int main() {
   int date, month, year,ex;
 progbasi:
   printf("\nYılı Giriniz>\n ");
   scanf("%d", &year);
 
   printf("\nAyı Giriniz>\n");
   scanf("%d", &month);if(month>12 || month<1){
       printf("Yanlış seçim yaptınız\n");goto progbasi;
   }
 
   printf("\nGünü Giriniz>\n ");
   scanf("%d", &date);if(date>30 || date<1){
       printf("Yanlış seçim yaptınız\n");goto progbasi;}
 
   day_of_week(date, month, year);
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
