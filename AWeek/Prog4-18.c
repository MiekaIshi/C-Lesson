#include<stdio.h>

void main(){
    int i , j;
    for(i = 1 ; i < 11 ; i++){
        for(j = 1 ;j < 11 ; j++){
            if(i == j){
                printf("��");
            }else{
                printf("��");
            }
        }
        printf("\n");
    }
}