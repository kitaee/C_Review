#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n;
    int k=0;
    int num=1;
    printf("상수 n 입력 : ");
    scanf("%d",&n);
    while(true){
        if((num<<k)>n){
            k-=1;
            break;
        }
        else{
            k+=1;
        }
    }
    printf("공식을 만족하는 k의 최댓값은 : %d\n",k);
}
