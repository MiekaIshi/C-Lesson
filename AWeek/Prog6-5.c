#include <stdio.h>

int max(int ,int);
  
void main(){
    int a,b;
    int result;
    printf("1�ڂ̒l����͂��Ă�������:");
    scanf("%d",&a);     //  1�ڂ̐��Aa�����
    printf("2�ڂ̒l����͂��Ă�������:");
    scanf("%d",&b); 
    
    result=max(a,b);
    printf("%d�ƁA%d�̂����A�傫���l��%d�ł��B\n",a,b,result);
}

int max(int n1,int n2){
    if(n1 > n2){
        return n1; //  a�̂ق����傫����΁Aa��result�ɑ��
    }else{
        return n2; //  b�̂ق����傫����΁Ab��result�ɑ��
    }
}