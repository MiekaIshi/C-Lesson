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
    //�z��̂��ׂĂ̒l��\�����Ȃ���A�v�f�𕪗�
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
    //3�̔{����\��
    printf("\n3�̔{��;");
    for(i = 0 ; i <j ;i++){
        printf("%d ",baisuu[i]);
    }
    //���̂ق��̐�
    printf("\n���̂ق��̐��F");
    for(i = 0 ; i < k ;i++){
        printf("%d ",other[i]);
    }
} 