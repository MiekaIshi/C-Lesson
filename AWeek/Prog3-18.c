#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 35 + -10;
    printf("�ێ� %d �x:",a);

    if(a >= 30){
        printf("�^�ē��ł�");
    }else if(a >= 25){
        printf("�ē��ł�");
    }else if(a <= 0){
        printf("�^�~���ł�");
    }
}  