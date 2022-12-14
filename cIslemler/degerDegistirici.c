#include <stdio.h>
#include <string.h>
void swap(int *i, int *j){
    int temp=*i;
    *i=*j;
    *j= temp;
    printf("Değerler: %d %d\n",*i,*j);
}
int main(){
    int a,b;
    printf("Değiştirmek istediğiniz iki değeri giriniz> \n");
    scanf("%d\n %d",&a,&b);
    swap(&a,&b);
    printf("a:%d,b:%d\n",a,b);
    
    getchar();
    getchar();
    return 0;
}

