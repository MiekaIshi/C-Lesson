#include <stdio.h>
  
//  関数のプロトタイプ宣言
int add(int,int);
int sub(int,int);
 
void main(){
    int a,b;
    int result,result2;
    printf("a=");
    scanf("%d",&a);     //  1つ目の数、aを入力
    printf("b=");
    scanf("%d",&b);     //  2つ目の数、bを入力
    result  = add(a,b);  //  3つ目の数、cを入力
    result2 = sub(a,b);
    printf("%d + %d = %d\n",a,b,result); 
    printf("%d - %d = %d\n",a,b,result2);
}
 
//  二つの整数の和を求める関数
int add(int n1,int n2){
    return n1 + n2;
}

int sub(int n1,int n2){
    return n1 - n2;
}