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
        printf("a‚Ì•û‚ª‘å‚«‚¢‚Å‚·");
    }else if(b > a){
        printf("b‚Ì•û‚ª‘å‚«‚¢");
    }else{
        printf("“™‚µ‚¢‚Å‚·");
    }
    
}  

    