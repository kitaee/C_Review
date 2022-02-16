#include <stdio.h>
void printGugudan(int a, int b);

int main(void){
    int a,b;
    printf("두 개의 정수를 입력해주세요 : ");
    scanf("%d %d",&a,&b);
    printGugudan(a,b);
    return 0;
}

void printGugudan(int a, int b){
    if(a<=b){
        for(int i=a;i<=b;i++){
            for(int k=1;k<=9;k++){
                printf("%d x %d = %d\n",i,k,i*k);
            }
        }
    }
    else{
        for(int i=b;i<=a;i++){
            for(int k=1;k<=9;k++){
                printf("%d x %d = %d\n",i,k,i*k);
            }
        }
    }
}
