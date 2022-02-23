#include <stdio.h>

int main(void){
  int num;
  int arr[50];
  int index=0;
  printf("10진수 정수 입력 : ");
  scanf("%d",&num);
  while(num!=0){
    arr[index]=num%2;
    num=num/2;
    index+=1;
  }
  for(int i=index-1;i>=0;i--){
    printf("%d",arr[i]);
  }
  return 0;
}
