#include <stdio.h>

int mostBigNum(int a, int b, int c);

int main(void){
    int a,b,c;
    int bigNum;
    printf("세 정수를 입력하세요 : ");
    scanf("%d %d %d",&a,&b,&c);
    bigNum=mostBigNum(a,b,c);
    printf("가장 큰 수 : %d\n",bigNum);
    return 0;
}


int mostBigNum(int a, int b, int c){
    if(a>=b){
        if(a>=c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>=c){
            return b;
        }
        else{
            return c;
        }
    }
}
