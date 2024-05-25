#include<stdio.h>
#include <time.h>
#include <stdlib.h> 
void main(){
    int data[3][3];
    int i ,j ;
    srand((unsigned)time(NULL));
    //配列の初期化
    for(i = 0; i < 3;i++){
        for(j = 0;j < 3;j++){
            data[i][j] = rand() % 10 + 0;
        }
    }
    //配列要素を表示
    for(i = 0; i < 3;i++){
        for(j = 0;j < 3;j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    int max = 0  ;
    int min = 11 ;
    //最小値、最大値を取得
    for(i = 0; i < 3;i++){
        for(j = 0;j < 3;j++){
            if(data[i][j] > max){
                max = data[i][j];
            }else if(data[i][j] < min){
                min = data[i][j];
            }

        }

    }
    printf("\n\n最大値は%d",max);
    printf("\n最小値は%d"  ,min);
}