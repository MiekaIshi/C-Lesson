#include <stdio.h>

void stars(int);
  
void main(){
    int n,i;
    //printf("表示する★の数を入力");
    //printf("表示する回数を入力:");
    scanf("%d",&n);
    stars(n);
}

void stars(int n){
    int i;
    if(n > 0){
        for(i = 0; i < n; i++){
            printf("★");
        }
        printf("\n");
    }else{
        printf("0より大きい値を入力してください。\n");
    }
}