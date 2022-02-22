#include <stdio.h>

void showOddNumber(int arr[],int len);
void showEvenNumber(int arr[],int len);

int main(void){
  int count=0;
  int arr[10];
  printf("총 10개의 숫자 입력 \n");
  while(count<10){
    printf("입력 : ");
    scanf("%d",&arr[count]);
    count+=1;
  }
  printf("홀수 출력 : ");
  showOddNumber(arr,10);
  printf("\n");
  printf("짝수 출력 : ");
  showEvenNumber(arr,10);
  printf("\n");
  return 0;
}

void showOddNumber(int arr[],int len){
  for(int i=0;i<len;i++){
    if(arr[i]%2!=0){
      printf("%d ",arr[i]);
    }
  }
}

void showEvenNumber(int arr[],int len){
  for(int i=0;i<len;i++){
    if(arr[i]%2==0){
      printf("%d ",arr[i]);
    }
  }
}
