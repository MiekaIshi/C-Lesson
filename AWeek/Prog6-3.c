#include <stdio.h>

double traingle(double ,double);

void main(){
    double teihen,takasa;   //  ��ӂƍ���������ϐ�
    double menseki;     //  �O�p�`�̖ʐ�
    printf("���=");
    scanf("%lf",&teihen);       //  1�ڂ̐��Aa�����
    printf("����=");
    scanf("%lf",&takasa); 

    printf("�O�p�`�̖ʐς�%1f",traingle(teihen,takasa)); 
}

double traingle(double hei,double weight){
    return hei * weight / 2;
}