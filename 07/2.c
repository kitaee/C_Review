#include <stdio.h>

int main(void){
    int loopCount;
    int count=0;
    printf("양의 정수 하나를 입력하세요 : ");
    scanf("%d",&loopCount);
    while(count<loopCount){
        printf("%d ",3*(count+1));
        count+=1;
    }
    return 0;   
}
