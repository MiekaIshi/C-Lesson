#include <stdio.h>

void numJudge(int);
  
void main(){
    int a;
    printf("�����l����͂��Ă��������F");
    scanf("%d",&a);
    
    numJudge(a);
}

void numJudge(int n){
    if(n == 0){
        printf("0�ł�\n");
    }else if(n%2 == 0){
        printf("�����ł�\n");
    }else{
        printf("��ł�\n");
    }
}