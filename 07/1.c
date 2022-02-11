#include <stdio.h>

int main(void){
    int loopCount;
    int count=0;
    printf("반복할 양의 정수를 하나 입력하세요 : ");
    scanf("%d",&loopCount);
    while(count<loopCount){
        printf("Hello World!\n");
        count+=1;
    }
    return 0;   
}
