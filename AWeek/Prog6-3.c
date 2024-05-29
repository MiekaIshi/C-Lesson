#include <stdio.h>

double traingle(double ,double);

void main(){
    double teihen,takasa;   //  底辺と高さを入れる変数
    double menseki;     //  三角形の面積
    printf("底辺=");
    scanf("%lf",&teihen);       //  1つ目の数、aを入力
    printf("高さ=");
    scanf("%lf",&takasa); 

    printf("三角形の面積は%1f",traingle(teihen,takasa)); 
}

double traingle(double hei,double weight){
    return hei * weight / 2;
}