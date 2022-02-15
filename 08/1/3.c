#include <stdio.h>

int main(void){
    int korean;
    int english;
    int math;
    double average;
    char grade;

    printf("국어, 영어, 수학의 점수를 입력하세요 : ");
    scanf("%d %d %d",&korean, &english, &math);
    average = (korean+english+math)/3;

    if(average>=90){
        grade = 'A';
        printf("학점 : %c\n", grade);
    }
    else if(average>=80){
        grade = 'B';
        printf("학점 : %c\n", grade);
    }
    else if(average>=70){
        grade = 'C';
        printf("학점 : %c\n", grade);
    }
    else if(average>=50){
        grade = 'D';
        printf("학점 : %c\n", grade);
    }
    else{
        grade = 'F';
        printf("학점 : %c\n", grade);
    }
    return 0;

}
