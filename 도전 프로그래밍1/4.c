#include <stdio.h>
int gcd(int a, int b);

int main(void){
    int remain=3500;
    int creamBread=500;
    int shrimp=700;
    int cola=400;
    printf("현재 당신이 소유하고 있는 금액 : %d\n",remain);
    for(int i=1;i<7;i++){
        for(int j=1;j<5;j++){
            for(int k=1;k<8;k++){
                if(creamBread*i + shrimp*j + cola*k==remain){
                    printf("크림빵 : %d개, 새우깡 : %d개, 콜 라 : %d개 \n",i,j,k);
                    break;
                }
            }
        }
    }
}
