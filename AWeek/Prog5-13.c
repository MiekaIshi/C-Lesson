#include<stdio.h>
#include <time.h>
#include <stdlib.h> 
void main(){
    int data[3][3];
    int i ,j ;
    srand((unsigned)time(NULL));
    //�z��̏�����
    for(i = 0; i < 3;i++){
        for(j = 0;j < 3;j++){
            data[i][j] = rand() % 10 + 0;
        }
    }
    //�z��v�f��\��
    for(i = 0; i < 3;i++){
        for(j = 0;j < 3;j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    int max = 0  ;
    int min = 11 ;
    //�ŏ��l�A�ő�l���擾
    for(i = 0; i < 3;i++){
        for(j = 0;j < 3;j++){
            if(data[i][j] > max){
                max = data[i][j];
            }else if(data[i][j] < min){
                min = data[i][j];
            }

        }

    }
    printf("\n\n�ő�l��%d",max);
    printf("\n�ŏ��l��%d"  ,min);
}