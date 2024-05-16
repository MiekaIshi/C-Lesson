#include <stdio.h>
 
void main(){
    int a; 
    int b = 5 ;
    //int c = 2 ;                             //  変数a（キーボードからの値を代入)
    printf("a=");                       //  キーボードからの入力を促す
    scanf("%d",&a);                     //  キーボードから一文字入力
    printf("a = ¥n",a); 
    printf("a + b = %d",a + b); 
}   