#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 0;
    printf("%d:\n",a);
    
    if(a % 2 == 0 && a % 3 == 0){
        printf("2‚Æ3‚ÌŒö”{”‚Å‚·");
    }

    if(a % 2 == 0){
        printf("2‚Ì”{”");
    }else if(a % 3 == 0){
        printf("3‚Ì”{”");
    }  
}  

    