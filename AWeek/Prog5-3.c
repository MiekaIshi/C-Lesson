#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void main(void){
    int data[10];
    int n;
    srand((unsigned)time(NULL));
    
    //配列の初期化
    int i ;
    for(i = 0 ; i < 11 ;i++){
        data[i] = (n = rand() % 10 + 1);
    }
    //配列のすべての値を表示
    int j ;
    for(j = 0 ; j < 10 ;j++){
        printf("%d ", data[j]);
    }
    
    printf("\n5以上の数：");
    for(i = 0 ;i < 10 ;i++){
        if(data[i] >= 5){
            printf("%d ",data[i]);
        }
    }
    printf("\n4未満の数：");
    for(i = 0 ;i < 10 ;i++){
        if(data[i] < 5){
            printf("%d ",data[i]);
        }
    }
}