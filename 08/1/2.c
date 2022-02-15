#include <stdio.h>

int main(void){
    int a,b;
    int result=0;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d",&a,&b);
    if(a>=b){
        result=a-b;
    }
    else{
        result=b-a;
    }
    printf("두 수의 차 : %d\n",result);
    return 0;
}
