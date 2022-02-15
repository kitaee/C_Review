#include <stdio.h>

int main(void){
    for(int i=1;i<=9;i++){
        if(i%2!=0){
            continue;
        }
        for(int j=1;j<=9;j++){
            printf("%d x %d = %d\n",i,j,i*j);
            if(j==i){
                break;
            }
        }
    }
    return 0;
}
