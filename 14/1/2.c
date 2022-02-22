#include <stdio.h>

void Swap3(*num1, *num2, *num3);

int main(void){
  int num1=1;
  int num2=2;
  int num3=3;
  printf("num1 = %d , num2 = %d, num3 = %d\n",num1,num2,num3);
  Swap3(&num1,&num2,&num3);
  printf("num1 = %d , num2 = %d, num3 = %d\n",num1,num2,num3);
  return 0;
}

void Swap3(*num1, *num2, *num3){
  int temp=*num1;
  *num1=*num3;
  *num3=*num2;
  *num2=temp;
}
