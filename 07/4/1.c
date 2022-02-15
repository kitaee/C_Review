#include <stdio.h>

int main(void){
    int startNum,endNum;
    int sum=0;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d",&startNum,&endNum);
    for(int i=startNum; i<=endNum;i++){
        sum+=i;
    }
    printf("sum = %d\n",sum);
    return 0;   
}
