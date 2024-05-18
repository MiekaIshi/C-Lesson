    #include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int a , b;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 0;
    printf("%d\n",a);
    
    if(a >= 80){
        printf("—D");
    }else if(a >= 70){
        printf("—Ç");
    }else if(a >= 60){
        printf("‰Â");
    }else{
        printf("•s‰Â");
    }
    
}  

    