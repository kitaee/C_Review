#include <stdio.h>

void rotateArray(int arr[][4]){
  int rotated[4][4];
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      rotated[j][3-i]=arr[i][j];
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      arr[i][j]=rotated[i][j];
    }
  }
}

int main(void){
  int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  printf("처음 상태\n");
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("90도 회전\n");
  rotateArray(arr);
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("90도 회전\n");
  rotateArray(arr);
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("90도 회전\n");
  rotateArray(arr);
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
