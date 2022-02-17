#include <stdio.h>

int main(void){
    int arr[5];
    int min,max;
    int sum=0;
    printf("5개의 정수를 입력하세요\n");
    for(int i=0;i<5;i++){
        printf("정수를 입력하세요 : ");
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
        sum+=arr[i];
    }
    printf("입력된 정수 중에서 최댓값 : %d\n",max);
    printf("입력된 정수 중에서 최솟값 : %d\n",min);
    printf("입력된 정수의 총 합 : %d\n",sum);
    return 0;

}
