#include<stdio.h>

void main(){
    int i;
    for(i = 1 ; i < 101 ; i++){
        printf("%d,",i);
        if(i % 10 == 0){
            printf("\n");
        }
    }
}