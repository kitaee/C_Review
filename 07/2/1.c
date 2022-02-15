#include <stdio.h>

int main(void){
    int num;
    int count=1;
    int sum=0;
    while(count<=5){
        printf("정수를 입력하세요 : ");
        scanf("%d",&num);
        if(num<1){
            printf("1이상의 정수를 입력하세요\n");
            continue;
        }
        else{
            sum+=num;
            count+=1;
        }
    }
    printf("sum = %d\n", sum);
    return 0;   
}
