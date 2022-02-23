#include <stdio.h>

int main(void){
  int num;
  int arr[10];
  int startIndex=0;
  int endIndex=9;
  printf("총 10개의 숫자 입력\n");
  for(int i=0;i<10;i++){
    printf("입력 : ");
    scanf("%d",&num);
    if(num%2!=0){
      arr[startIndex]=num;
      startIndex++;
    }
    else{
      arr[endIndex]=num;
      endIndex--;
    }
  }
  printf("배열 요소의 출력 : ");
  for(int i=0;i<10;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
