#include <stdio.h>

int InputScore(void);
char GetGrade(int, int, int);

int main(){
    int c1, c2, c3;
    char result;
    c1 = InputScore();
    c2 = InputScore();
    c3 = InputScore();
    printf("%d", c1+c2+c3);
    result = GetGrade(c1, c2, c3);
    printf("your grade is -----%c", result);
};

int InputScore(){
    int grade;
    printf("input your grade");
    scanf("%d", &grade);
    if ((grade>=0)&&(grade<=100)){
        return grade;
    } else {
        return -1;
    };
};

char GetGrade(int c1, int c2, int c3){
    printf("%d",(c1+c2+c3)/30);
    switch((c1+c2+c3)/30){
        case 10:
        case 9:
            return 'A';
            break;
        case 8:
            return 'B';
            break;
        case 7:
            return 'C';
            break;
        case 6:
            return 'D';
            break;
        default :
            return 'F';
    };
}