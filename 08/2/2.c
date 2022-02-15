#include <stdio.h>

int main(void){
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            if(i+j==9){
                printf("A : %d , Z : %d\n",i,j);
                break;
            }
        }
    }
    return 0;
}
