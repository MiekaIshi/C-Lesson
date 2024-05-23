#include<stdio.h>
#include <time.h>
#include <stdlib.h>
  

void main(){
   int a;
    srand((unsigned)time(NULL));

    int i ;
    int max = 0;
    for(i = 1 ; i < 6 ; i++){
        a = rand() % 100 + 1;
        printf("%d,",a);

        if(a > max){
            max = a;
        }
    }
        printf("\nÅ‘å’l‚Í%d",max);  
} 

    