#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int n);

int main(void){
    int primeCount=0;
    int number=1;
    while(true){
        if(isPrimeNumber(number)){
            printf("%d ",number);
            primeCount+=1;
        }
        number+=1;
        if(primeCount==10){
            break;
        }
    }
}

bool isPrimeNumber(int n){
    int count=0;
    if(n==1){
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
