#include <stdio.h>

void stars(int);
  
void main(){
    int n,i;
    //printf("�\�����遚�̐������");
    //printf("�\������񐔂����:");
    scanf("%d",&n);
    stars(n);
}

void stars(int n){
    int i;
    if(n > 0){
        for(i = 0; i < n; i++){
            printf("��");
        }
        printf("\n");
    }else{
        printf("0���傫���l����͂��Ă��������B\n");
    }
}