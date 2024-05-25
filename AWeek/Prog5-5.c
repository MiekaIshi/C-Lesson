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
    //配列のすべての値を表示しながら、要素を分類
    int baisuu[10];
    int j = 0;
    int k = 0;
    int other[10];

    for(i = 0 ; i < 10 ;i++){
        printf("%d ", data[i]);
        
        if(data[i] % 3 == 0){
            baisuu[j++] = data[i];
        }else{
            other[k++] = data[i]; 
        }
        //printf("\n");
    }
    //3の倍数を表示
    printf("\n3の倍数;");
    for(i = 0 ; i <j ;i++){
        printf("%d ",baisuu[i]);
    }
    //そのほかの数
    printf("\nそのほかの数：");
    for(i = 0 ; i < k ;i++){
        printf("%d ",other[i]);
    }
} 