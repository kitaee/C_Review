#include <stdio.h>

void SquareByReference(int *ptr);
int SquareByValue(int num);

int main(void){
    int num=5;
    printf("%d\n", SquareByValue(num));
    SquareByReference(&num);
    printf("%d\n",num);
    return 0;
}

void SquareByReference(int *ptr){
    int num=*ptr;
    *ptr = num*num;
}

int SquareByValue(int num){
    return num*num;
}
