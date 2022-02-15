#include <stdio.h>

int main(void){
    int n=1;
    while(n<100){
        if(n%7==0){
            printf("%d ",n);
        }
        else if(n%9==0){
            printf("%d ",n);
        }
        n+=1;
    }
    return 0;   
}
