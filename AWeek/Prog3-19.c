#include <stdio.h>

void main(){
	int years ;
	printf("¼—ï‚ğ“ü—Í\n");
	scanf("%d",&years);

    if(years % 4 == 0) {
    if(years % 100 == 0) {
      if (years % 400 == 0) {
        printf("‰[”N‚Å‚ ‚é");
      } else {
        printf("‰[”N‚Å‚Í‚È‚¢");
      }
    } else {
      printf("‰[”N‚Å‚ ‚é");
    }
  } else {
    printf("‰[”N‚Å‚Í‚È‚¢");
  }
}  