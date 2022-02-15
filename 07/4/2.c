#include <stdio.h>

int main(void){
    int n;
    int factorialResult=1;
    printf("정수 n을 입력하세요 : ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        factorialResult*=i;
    }
    printf("%d! = %d\n",n,factorialResult);
    return 0;   
}
