#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("êîílÅF%d\n",n);
    if( n >= 5){
        printf("5à»è„");
    }else{
        printf("5ñ¢ñû");
    }
}