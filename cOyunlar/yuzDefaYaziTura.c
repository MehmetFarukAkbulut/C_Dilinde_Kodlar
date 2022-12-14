#include<stdio.h>
#include<stdlib.h>

#include<time.h>
int main()
{
 int i;
 srand(time(NULL));int t=0,y=0;
 for(i=1;i<=100;i++)
 {
 if(paraAt()==1){
 printf("Tura\n");t++;}
    else if(paraAt()==0){
 printf("Yazi\n");y++;}
 }
 printf("Yazi/Tura Oranı:%d / %d ",y,t);
return 0;
}
int paraAt(void)
{
 int a;
 a=1+rand()%2;
        if(a%2==0)
 return 1;
        else
 return 0;
}
