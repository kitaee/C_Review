#include <stdio.h>
void Fibonacci(int count);

int main(void){
    Fibonacci(6);
    return 0;
}

void Fibonacci(int count){
    int f1=0;
    int f2=1;
    int f3;
    if(count==1){
        printf("%d ",f1);
    }
    else{
        printf("%d %d ",f1,f2);
    } 
    for(int i=0;i<count-2;i++){
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }
}
