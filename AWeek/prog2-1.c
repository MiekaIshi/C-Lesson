#include <stdio.h>
 
void main(){
    int a;
    int b;                         //  変数a（キーボードからの値を代入)
    printf("a=");                       //  キーボードからの入力を促す
    scanf("%d",&a);
    printf("\nb=" );                       //  キーボードからの入力を促す
    scanf("%d",&b);                           //  キーボードから一文字入力
    printf("a + b = %d" a + b);       //  aの値を表示
}