#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void main(void){
    int data[10];
    int n;
    srand((unsigned)time(NULL));
    
    //�z��̏�����
    int i ;
    for(i = 0 ; i < 11 ;i++){
        data[i] = (n = rand() % 10 + 1);
    }
    //�z��̂��ׂĂ̒l��\��
    int j ;
    for(j = 0 ; j < 10 ;j++){
        printf("%d ", data[j]);
    }
    
    printf("\n5�ȏ�̐��F");
    for(i = 0 ;i < 10 ;i++){
        if(data[i] >= 5){
            printf("%d ",data[i]);
        }
    }
    printf("\n4�����̐��F");
    for(i = 0 ;i < 10 ;i++){
        if(data[i] < 5){
            printf("%d ",data[i]);
        }
    }
}