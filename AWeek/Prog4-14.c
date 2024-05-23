#include<stdio.h>
#include <time.h>
#include <stdlib.h>
  

void main(){
   int a;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
  
    if(a % 2 == 0){
        int i ;
        for(i = 1 ; i <= a; i++){
            printf("™");
        }
        //printf("\n");
    }else{
        int i2;
        for(i2 = 1 ; i2 <= a; i2++){
            printf("š");
        }    
    }
} 

    