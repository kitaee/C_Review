#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* makeRandomNumber(){
  srand(time(NULL));
  static int computer[3];
  computer[0]=rand()%10;
  while(1){
    computer[1]=rand()%10;
    if(computer[0]!=computer[1]){
      break;
    }
  }
  while(1){
    computer[2]=rand()%10;
    if(computer[0]!=computer[2] && computer[1]!=computer[2]){
      break;
    }
  }
  return computer;
}

int main(void){
  int* compurterNumber = makeRandomNumber();
  printf("%d %d %d\n",compurterNumber[0],compurterNumber[1],compurterNumber[2]);
  int userChoice[3];
  int strike=0;
  int ball=0;
  int count=1;
  printf("Start Game!\n");

  while(strike!=3){
    strike=0;
    ball=0;
    printf("3개의 숫자 선택 : ");
    scanf("%d %d %d",&userChoice[0],&userChoice[1],&userChoice[2]);
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(compurterNumber[i]==userChoice[j]){
          if(i==j){
            strike++;
          }
          else{
            ball++;
          }
        }
      }
    }
    printf("%d번째 도전 결과 : %d strike, %d ball!!\n",count,strike,ball);
    count++;
  }
  
  printf("Game Over!\n");

  return 0;
}
