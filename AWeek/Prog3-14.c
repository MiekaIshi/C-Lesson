#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int a , b;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
    printf("a = %d\n",a);
    b = rand() % 10 + 1;
    printf("b = %d\n",b);

    if(a > b){
        printf("aの方が大きいです");
    }else if(b > a){
        printf("bの方が大きい");
    }else{
        printf("等しいです");
    }
    
}  

    