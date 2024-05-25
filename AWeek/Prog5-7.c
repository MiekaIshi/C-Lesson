#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void main(void){
    int data[5];
    srand((unsigned)time(NULL));

    int i ;
    int sum = 0 ;
    for(i = 0 ; i < 5 ;i++){
        data[i] = rand() % 10 + 1;
        printf("%d ",data[i]);
        sum += data[i];
    } 
    int ave = sum / 5;
    printf("\n合計値は:%d、平均値は%dです\n",sum ,ave);

    int big[5] ,small[5];
    int j = 0;
    int k = 0;
    for(i = 0; i < 5 ;i++){
        if(data[i] > ave){
            big[j++] = data[i];
            }else if(data[i] < ave){
                small[k++] = data[i];
            }
        }
        printf("\n\n平均値より大きい値：");
        for(i = 0 ;i <j ;i++){
            printf("%d ",big[i]);
        }
        printf("\n平均値より小さい数：");
        for(i = 0;i < k ;i++){
            printf("%d ",small[i]);
        }
}   