#include<stdio.h>
#include <time.h>
#include <stdlib.h>
  

void main(){
   int a;
    srand((unsigned)time(NULL));

    int i;
    for(i = 1 ; i < 6 ; i++){
        a = rand() % 100 + 1;
        printf("%d,",a);
    }
} 

    