#include<stdio.h>
void main(){
    int a ;
    printf("aの値を入力:");
    scanf("%d",&a);
    if(a >= 20 && a < 80){
        printf("aは20以上、80未満です");
    }
}