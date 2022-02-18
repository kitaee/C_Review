#include <stdio.h>

int main(void){
    char str[50];
    int strLen=0;
    char temp;
    printf("영단어 하나를 입력해주세요 : ");
    scanf("%s",str);
    for(int i=0;i<50;i++){
        if(str[i]=='\0'){
            break;
        }
        else{
            strLen++;
        }
    }
    printf("%d\n",strLen);
    
    for(int i=0;i<=strLen/2;i++){
        temp=str[strLen-1-i];
        str[strLen-1-i]=str[i];
        str[i]=temp;
    }

    printf("뒤집힌 영단어 : %s\n",str);
    return 0;
}

//array 01234 strLen=5 0->4 1- >3 ,,,
