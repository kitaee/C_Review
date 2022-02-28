#include <stdio.h>

/*2차원 배열을 인자로 넘기려면 가로크기만 지정해주면 된다.*/

int main(void){
  int score[5][5];
  for(int i=0;i<4;i++){
    int sum=0;
    if(i==0){
      printf("철희의 점수 입력\n");
    }
    else if(i==1){
      printf("철수의 점수 입력\n");
    }
    else if(i==2){
      printf("영희의 점수 입력\n");
    }
    else{
      printf("영수의 점수 입력\n");
    }
    for(int j=0;j<4;j++){
      if(j==0){
        printf("국어 : ");
      }
      else if(j==1){
        printf("영어 : ");
      }
      else if(j==2){
        printf("수학 : ");
      }
      else{
        printf("국사 : ");
      }
      scanf("%d",&score[i][j]);
      sum+=score[i][j];
    }
    score[i][4]=sum;
  }
  for(int i=0;i<5;i++){
    int sum=0;
    for(int j=0;j<4;j++){
      sum+=score[j][i];
    }
    score[4][i]=sum;
  }
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("%d ",score[i][j]);
    }
    printf("\n");
  }
  return 0;
}
