#include <stdio.h>

int main(void){
    int hour,minute,second;
    printf("초(second) 입력 : ");
    scanf("%d",&second);
    minute=second/60;
    hour=minute/60;
    minute=minute%60;
    second=second%60;
    printf("[hour : %d, minute : %d, second : %d]\n",hour,minute,second);
    return 0;
}
