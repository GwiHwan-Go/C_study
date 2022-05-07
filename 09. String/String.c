#include <stdio.h>

int InputNum(void);
char GetGrade(int, int, int);

int main(){

    int id[20];
    char name[30];

    printf("input youre student_id\n");
    scanf("%s",id);
    
    printf("input youre name\n");
    scanf(" %[^\n]",name);   
    
    printf("%s %s", id, name);

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