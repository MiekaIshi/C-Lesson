#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 0;
    printf("%d\n",a);
   
   if(a <= 50){
        if(a % 2 == 0){
            printf("50�ȉ��̋����ł�");
        }
        printf("50�ȉ��ł�");
    }
    if(a % 2 == 0){
        printf("�����ł�");
    }
}
  