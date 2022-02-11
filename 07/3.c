#include <stdio.h>

int main(void){
    int num;
    int sum=0;
    while(num!=0){
        printf("정수 입력 : ");
        scanf("%d",&num);
        sum+=num;
    }
    printf("sum = %d\n",sum);
    return 0;   
}
