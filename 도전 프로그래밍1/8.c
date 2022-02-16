#include <stdio.h>

int powerN(int n);

int main(void){
    int n;
    int result;
    printf("정수 입력 : ");
    scanf("%d",&n);
    result=powerN(n);
    printf("2의 %d승은 : %d\n",n,result);
    return 0;
}

int powerN(int n){
    if(n==0){
        return 1;
    }
    else{
        return 2*powerN(n-1);
    }
}
