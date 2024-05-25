#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void main(void){
    int array[6];
    int n;
    srand((unsigned)time(NULL));
    
    int i ;
    for(i = 0 ; i < 7 ;i++){
        array[i] = (n = rand() % 10 + 1);
    }
    int j ;
    for(j = 0 ; j < 7 ;j++){
        printf("array[%d] = %d\n", j, array[j]);
    }
}