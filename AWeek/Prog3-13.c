#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 3 + 1;
    
    switch(n){
        case 1 :
        printf("グー");
        break;

        case 2 :
        printf("パー");
        break;

        case 3:
        printf("チョキ");
        break;
    }
}