#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
  int userChoice;
  int computerChoice;
  int win=0;
  int draw=0;
  while(1){
    printf("바위는 1, 가위는 2, 보는 3 : ");
    scanf("%d",&userChoice);
    computerChoice=(rand()%3)+1;
    if(userChoice==1){  // 유저가 바위
      if(computerChoice==1){
        printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
        draw++;
        continue;
      }
      else if(computerChoice==2){
        printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
        win++;
        continue;
      }
      else{
        printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다!\n");
        break;
      }
    }
    else if(userChoice==2){  // 유저가 가위
      if(computerChoice==1){
        printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다!\n");
        break;
      }
      else if(computerChoice==2){
        printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!\n");
        draw++;
        continue;
      }
      else{
        printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다!\n");
        win++;
        continue;
      }
    }
    else{  // 유저가 보
      if(computerChoice==1){
        printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다!\n");
        win++;
        continue;
      }
      else if(computerChoice==2){
        printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다!\n");
        break;
      }
      else{
        printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!\n");
        draw++;
        continue;
      }
    }
  }
  printf("게임의 결과 %d승, %d무\n",win,draw);
	return 0;
}
