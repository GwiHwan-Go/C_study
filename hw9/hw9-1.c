#include <stdio.h>

int InputNum(void);
char GetGrade(int, int, int);

int main(){

    int array1[5] = {11,22,33,44,55};
    int array2[5] = {11,22,33,44,55};

    printf("%d", array1==array2);
    for (int i = 0; i < 5; i++){
        break;
    };

    return 0;
};

int InputNum(){
    int score;
    do {
        printf("점수를 입력하세요 : ");
        scanf("%d", &score);
    } while( (score < 0) || (score > 100));

    printf("점수 %d 점이 입력되었습니다.\n", score);
    return score;
};