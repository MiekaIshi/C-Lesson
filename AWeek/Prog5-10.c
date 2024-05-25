 #include <stdio.h>
#include <time.h>
#include <stdlib.h> 
void main(){
    int data[5];
    srand((unsigned)time(NULL));
 
    int i;
    for(i = 0 ;i < 5; i++){
        data[i] = rand() % 10 + 0;
    } 
    int j = 0;
    for(i = 0; i < 5; i++){
        while(data[i] >= j){
            printf("Åö");
            j++;
        }
        printf("\n");
        j = 0;
    }
}     