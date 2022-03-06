#include <stdio.h>

int main(void){
  int snail[10][10]={0,};
  int num;
  int x=0;
  int y=0;
  int count=1;
  printf("숫자를 입력하시오 : ");
  scanf("%d",&num);
  int cur=num;

  for(int i=0;i<2*num-1;i++){
    switch(i%4){
      case 0:
        for(int k=0;k<cur;k++){
          snail[y][x]=count;
          x++;
          count++;
        }
        x--;
        y++;
        cur--;
        break;
      case 1:
        for(int k=0;k<cur;k++){
          snail[y][x]=count;
          y++;
          count++;
        }
        y--;
        x--;
        break;
      case 2:
        for(int k=0;k<cur;k++){
          snail[y][x]=count;
          x--;
          count++;
        }
        x++;
        y--;
        cur--;
        break;
      case 3:
        for(int k=0;k<cur;k++){
          snail[y][x]=count;
          y--;
          count++;
        }
        y++;
        x++;
        break;
    }
  }
  for(int t=0;t<num;t++){
    for(int p=0;p<num;p++){
      printf("%d ",snail[t][p]);
    }
    printf("\n");
  }
  return 0;
}
