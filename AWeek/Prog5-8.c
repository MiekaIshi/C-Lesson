#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void main(){
    int data[5];
    srand((unsigned)time(NULL));

    //配列の初期化
    int i ;
    for(i = 0 ;i < 5 ;i++){
        data[i] = rand() % -5 + 5;
    }

    //配列表示とカウント
    int plus  = 0;
    int minus = 0;
    int zero  = 0;
    for(i = 0 ;i < 5 ;i++){
        printf("%d ",data[i]);
        if(data[i] == 0){
            zero++;
        }else if(data[i] > 0){
            plus++;
        }else{
            minus++;
        }
    }
    printf("\n0よりも大きい数%d個",plus);
    printf("\n0よりも小さい数%d個",minus);
    printf("\n0の数%d",zero);
}