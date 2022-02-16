#include <stdio.h>
int gcd(int a, int b);

int main(void){
    int a,b;
    int gcdNumber;
    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d %d",&a,&b);
    gcdNumber=gcd(a,b);
    printf("두 수의 최대공약수 : %d\n",gcdNumber);
    return 0;
}

int gcd(int a, int b){
    if(a<=b){
        for(int i=a;i>=1;i--){
            if(a%i==0 && b%i==0){
                return i;
            }
        }
    }
    else{
        for(int i=b;i>=1;i--){
            if(a%i==0 && b%i==0){
                return i;
            }
        }
    }
}
