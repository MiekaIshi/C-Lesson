#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void main(){
    int data[5];
    srand((unsigned)time(NULL));

    //�z��̏�����
    int i ;
    for(i = 0 ;i < 5 ;i++){
        data[i] = rand() % -5 + 5;
    }

    //�z��\���ƃJ�E���g
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
    printf("\n0�����傫����%d��",plus);
    printf("\n0������������%d��",minus);
    printf("\n0�̐�%d",zero);
}