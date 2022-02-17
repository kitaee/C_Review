#include <stdio.h>

int main(void){
    char str[50];
    printf("영단어 하나를 입력해주세요 : ");
    scanf("%s",str);
    int len=0;
    for(int i=0;i<50;i++){
        if(str[i]=='\0'){
            break;
        }
        else{
            len++;
        }
    }
    printf("길이 : %d",len);
    return 0;
}
