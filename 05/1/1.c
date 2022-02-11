#include <stdio.h>

int main(void){
    int left_x, left_y;
    int right_x, right_y;
    int area;
    printf("좌 상단의 x,y 좌표 : ");
    scanf("%d %d",&left_x, &left_y);
    printf("우 하단의 x,y 좌표 : ");
    scanf("%d %d",&right_x, &right_y);
    area=(right_x-left_x)*(right_y-left_y);
    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n",area);
    return 0;
}
