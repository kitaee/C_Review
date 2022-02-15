#include <stdio.h>

int main(void){
    int dan;
    int count=9;
    printf("몇 단을 출력하시겠습니까? : ");
    scanf("%d",&dan);
    while(count>0){
        printf("%d x %d = %d\n",dan,count,dan*count);
        count-=1;
    }
    return 0;   
}
