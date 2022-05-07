#include <stdio.h>

int InputScore(void);
char GetGrade(int, int, int);

int main(){

    int s1, s2, s3;

    for (int i=0; i<5; i++){
        s1 = InputScore();
        s2 = InputScore();
        s3 = InputScore();
        printf("%d 번째 학생의 최종 학점은 %c 입니다.\n", i+1,GetGrade(s1,s2,s3));
    };

    return 0;
};

int InputScore(){
    int score;
    do {
        printf("점수를 입력하세요 : ");
        scanf("%d", &score);
    } while( (score < 0) || (score > 100));

    printf("점수 %d 점이 입력되었습니다.\n", score);
    return score;
};

char GetGrade(int c1, int c2, int c3){

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
