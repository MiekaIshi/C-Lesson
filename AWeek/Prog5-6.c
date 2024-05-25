#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void main(void){
    int data[10];
    srand((unsigned)time(NULL));
    
    //配列の初期化
    int i ;
    for(i = 0 ; i < 10 ;i++){
        data[i] = rand() % 10 + 1;
    }
    //配列の値を表示
    for(i = 0 ; i < 10 ;i++){
        printf("%d ", data[i]);
    }
    //最大値と最小値を設定
    int max = 0;
    int min = 10;
    for(i = 0; i <10 ;i++){
        if(data[i] > max){
            max = data[i];
        }
        if(data[i] < min){
            min = data[i];
        }
    }
    printf("\n最大値は%d",max);
    printf("\n最小値は%d",min);
} 