#include <stdio.h>

void main(){
	int years ;
	printf("西暦を入力\n");
	scanf("%d",&years);

    if(years % 4 == 0) {
    if(years % 100 == 0) {
      if (years % 400 == 0) {
        printf("閏年である");
      } else {
        printf("閏年ではない");
      }
    } else {
      printf("閏年である");
    }
  } else {
    printf("閏年ではない");
  }
}  