#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char str[50],int strLen){
  for(int i=0;i<strLen/2;i++){
    if(str[i]!=str[strLen-i-1]){
      return false;
    }
  }
  return true;
}

int getStrLen(char str[50]){
  int strLen=0;
  while(str[strLen]!='\0'){
    strLen++;
  }
  return strLen;
}

int main(void){
  char str[50];
  int strLen=0;
  printf("문자열 입력 : ");
  scanf("%s",str);
  strLen=getStrLen(str);
  if(isPalindrome(str,strLen)){
    printf("회문 입니다.\n");
  }
  else{
    printf("회문이 아닙니다.\n");
  }
  return 0;
}
