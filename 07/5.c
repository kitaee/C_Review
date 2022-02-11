#include <stdio.h>

int main(void){
    int count;
    int num;
    int index=0;
    double average=0;
    printf("몇 개의 정수를 입력할 것인가요? : ");
    scanf("%d",&count);
    while(index<count){
        printf("정수를 입력하세요 : ");
        scanf("%d",&num);
        average+=num;
        printf("%lf\n",average);
        index+=1;
    }
    average=average/count;
    printf("average = %lf\n", average);
    return 0;   
}
