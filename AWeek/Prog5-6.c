#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void main(void){
    int data[10];
    srand((unsigned)time(NULL));
    
    //�z��̏�����
    int i ;
    for(i = 0 ; i < 10 ;i++){
        data[i] = rand() % 10 + 1;
    }
    //�z��̒l��\��
    for(i = 0 ; i < 10 ;i++){
        printf("%d ", data[i]);
    }
    //�ő�l�ƍŏ��l��ݒ�
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
    printf("\n�ő�l��%d",max);
    printf("\n�ŏ��l��%d",min);
} 