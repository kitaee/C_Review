#include <stdio.h>

int main(void){
    int num;
    printf("10진수 정수를 입력하세요 : ");
    scanf("%d",&num);
    printf("10진수 -> 16진수 : %d -> %x\n",num,num);
    return 0;
}
