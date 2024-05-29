#include<stdio.h>
#include<stdlib.h>

int main(){
    int num[2];

    num[0] = -2;
    num[1] = 5;
    printf("整数値を入力：");
    int x;
    scanf("%d",x);


    printf("絶対値は%d\n",abs(x));
    printf("%dの絶対値は %d です。\n", num[0], abs(num[0]));
    printf("%dの絶対値は %d です。\n", num[1], abs(num[1]));
    printf("\n");

    return 0;
}
