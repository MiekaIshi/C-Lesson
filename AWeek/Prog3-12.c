#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + -10;
    printf("数値：%d\n",n);
    if( n >= 1){
        printf("正の整数");
    }else if( n <= -1){
        printf("負の整数");
    }else{
        printf("0です");
    }
}