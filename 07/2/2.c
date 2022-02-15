#include <stdio.h>

int main(void){
    int line=0;
    while(line<5){
        int count=0;
        while(count<line){
            printf("○");
            count+=1;
        }
        printf("*\n");
        line+=1;
    }
    return 0;   
}
