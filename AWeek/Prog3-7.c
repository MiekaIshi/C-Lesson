#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("���l�F%d\n",n);
    if( n >= 5){
        printf("5�ȏ�");
    }else{
        printf("5����");
    }
}