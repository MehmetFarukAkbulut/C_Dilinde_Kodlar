  #include <stdio.h>
  #include <conio.h>
#include <string.h>
#include <stdlib.h>
  int main (){
 int old,a,b,c,dogru=0;
 printf ("My name is Faruk.\nI am twenty one years old.\nI like to go to gym and make muscles.\n");
 printf("Paragrafa bakildiginda konusmacinin yasini yaziniz> ") ; scanf("%d",&old);
  if (old==21){printf("Dogru cevap ");dogru++;}
  else {printf("Yanlis cevap ");}
  printf("\nParagrafa bakildiginda konusmacinin adı hangisidir?:\n 1-Faruk\n 2-Osman\n 3-Ahmet\n 4-Ömer\n") ;scanf("%d",&a);
   if (a!=1){printf("Yanlis cevap  ");}
   else{printf("Dogru cevap"); dogru++;}
  printf("\nParagrafa bakildiginda konusmacinin gitmeyi sevdiği yer hangisidir?:\n");
  printf(" 1-Fastfood Restoranlar\n 2-Avm\n 3-Spor Salonu\n 4-İnternet Kafeler\n ") ;scanf("%d",&b);
  if (b!=3){printf("Yanlis cevap  ");}
  else{printf("Dogru cevap ");dogru++;}
  printf("\nParagrafa bakildiginda konusmacinin yapmayı sevdiği şey hangisidir?:\n");
  printf(" 1-Sex\n 2-Yemek\n 3-Ders Çalışmak\n 4-Kas Yapmak\n ") ;scanf("%d",&c);
  if (c!=4){printf("Yanlis cevap \n");}
  else{printf("Dogru cevap \n");dogru++;}
  printf("Test sonucunuz: %d Doğru,%d Yanlış cevap.\n 100 üzerinden %d puan aldınız.\n",dogru,4-dogru,dogru*25);
  return 0;
}


