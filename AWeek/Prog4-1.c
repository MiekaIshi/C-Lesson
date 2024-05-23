#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("%d:",n);

    int i;
    for(i = 1 ; i <= n ; i++){
        printf("¡");
    }
}