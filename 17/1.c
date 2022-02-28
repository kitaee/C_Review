#include <stdio.h>

void MaxAndMin(int arr[],int **maxPtr,int **minPtr, int len){
  int *max=&arr[0];
  int *min=&arr[0];
  for(int i=0;i<len;i++){
    if(arr[i]>*max){
      max=&arr[i];
    }
    if(arr[i]<*min){
      min=&arr[i];
    }
  }
  *maxPtr=max;
  *minPtr=min;
}

int main(void){
  int *maxPtr;
  int *minPtr;
  int arr[5]={1,2,3,4,5};
  MaxAndMin(arr,&maxPtr,&minPtr,5);
  printf("최대 : %d, 최소 : %d\n",*maxPtr,*minPtr);
  printf("배열 주소 : %p, 포인터 주소 : %p\n",&arr[4],maxPtr);
  return 0;
}
