#include <stdio.h>

void main(){
	int years ;
	printf("��������\n");
	scanf("%d",&years);

    if(years % 4 == 0) {
    if(years % 100 == 0) {
      if (years % 400 == 0) {
        printf("�[�N�ł���");
      } else {
        printf("�[�N�ł͂Ȃ�");
      }
    } else {
      printf("�[�N�ł���");
    }
  } else {
    printf("�[�N�ł͂Ȃ�");
  }
}  