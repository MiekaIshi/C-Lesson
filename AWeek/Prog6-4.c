#include <stdio.h>

void numJudge(int);
  
void main(){
    int a;
    printf("®”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
    scanf("%d",&a);
    
    numJudge(a);
}

void numJudge(int n){
    if(n == 0){
        printf("0‚Å‚·\n");
    }else if(n%2 == 0){
        printf("‹ô”‚Å‚·\n");
    }else{
        printf("Šï”‚Å‚·\n");
    }
}