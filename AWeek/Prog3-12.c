#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + -10;
    printf("”’lF%d\n",n);
    if( n >= 1){
        printf("³‚Ì®”");
    }else if( n <= -1){
        printf("•‰‚Ì®”");
    }else{
        printf("0‚Å‚·");
    }
}