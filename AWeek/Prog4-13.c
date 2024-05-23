#include<stdio.h>
#include <time.h>
#include <stdlib.h>
  

void main(){
   int a;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
  
    if(a >= 5){
        int i;
        for(i = 1;i <= a;i++){
            printf("™");
        }
        printf("\n");
    }else{
        printf("’l‚Í%d\n",a);
    }
} 

    