#include<stdio.h>
#include <time.h>
#include <stdlib.h> 
void main(){
    int data[5];
    srand((unsigned)time(NULL));

    int i;
    for(i = 0 ;i < 5; i++){
        data[i] = rand() % 100 + 0;
    }
    for(i = 0; i < 5; i++){
        printf("%d ",data[i]);
    }
    printf("\n60�����̐�:");
    for(i = 0; i < 5; i++){
        if(data[i] < 60){
            printf("%d ",data[i]);
        }
    }
    printf("\n60�ȏ�80�����̐�:");
    for(i = 0; i < 5; i++){
        if(data[i] > 60 && data[i] < 80){
            printf("%d ",data[i]);
        }
    }
    printf("\n80�ȏ�̐�:");
    for(i = 0; i < 5; i++){
        if(data[i] > 80){
            printf("%d ",data[i]);
        }
    }
}