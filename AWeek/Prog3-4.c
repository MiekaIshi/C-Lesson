#include<stdio.h>
void main(){
    int a ;
    printf("aの値を入力:");
    scanf("%d",&a);
    if(a <= 10 && a >= 90){
        printf("aは10以下、または90以上である");
    }
}