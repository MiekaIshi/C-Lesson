#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
void main(){
    int data[10];
    srand((unsigned)time(NULL));

    int i;
    int big   [10];
    int small [10];
    int j = 0;
    int k = 0;
    for(i = 0 ;i < 10; i++){
        data[i] = rand() % 100 + 0;
    }
    for(i = 0; i < 10; i++){
        printf("%d ",data[i]);
        if(data[i] >= 50){
            big[j++] = data[i];
        }else{
            small[k++] = data[i];
        }
    }
    printf("\n50‚æ‚è‚à‘å‚«‚¢”:");
    for(i = 0; i < j;i++){
        printf("%d ",big[i]);
    }
    printf("\n50‚æ‚è‚à¬‚³‚¢”:");
    for(i = 0; i < k;i++){
        printf("%d ",small[i]);
    }     
}