#include<stdio.h>
#include<stdlib.h>

int main(){
    int num[2];

    num[0] = -2;
    num[1] = 5;
    printf("�����l����́F");
    int x;
    scanf("%d",x);


    printf("��Βl��%d\n",abs(x));
    printf("%d�̐�Βl�� %d �ł��B\n", num[0], abs(num[0]));
    printf("%d�̐�Βl�� %d �ł��B\n", num[1], abs(num[1]));
    printf("\n");

    return 0;
}
