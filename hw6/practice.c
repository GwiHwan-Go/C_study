#include <stdio.h>

double Difference(double, double);
int InputScore(void);
char GetGrade(int, int, int);
int main(){
    // int num1=100,num2=60,num3=80;
    char grade;
    // grade=GetGrade(num1,num2,num3);
    // printf("%c", grade);
    printf("intpu");
    scanf("%c", &grade);
    printf("\n%c", grade);
}

double Difference(double num1, double num2){
    return (num1 > num2 ? num1-num2 : num2-num1);
};
int InputScore(){
    int score;
    printf("Input score");
    scanf("%d", &score);
    if (score>=0 && score <=100){
        return score;
    }else{
        return -1;
    };
};
char GetGrade(int c1, int c2, int c3){
    switch ((c1+c2+c3)/30){
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default :
            return 'F';
    };
};

