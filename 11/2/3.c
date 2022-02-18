#include <stdio.h>

int main(void){
    char str[50];
    int strLen=0;
    int maxIndex=0;
    printf("영단어 하나를 입력해주세요 : ");
    scanf("%s",str);

    while(str[strLen] != '\0'){
        strLen++;
    }

    for(int i=0;i<strLen;i++){
        if(str[i]>str[maxIndex]){
            maxIndex=i;
        }
    }
    printf("아스키 코드 값이 가장 큰 문자 : %c\n",str[maxIndex]);
    return 0;
}
