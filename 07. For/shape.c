#include <stdio.h>

void DisplayTriangle(int);

int main(){
    int shape;
    do{
    printf("\n숫자를 입력하세요.");
    scanf("%d", &shape);
    DisplayTriangle(shape);
    }while(shape>0);

    return 0;
};

void DisplayTriangle(int h){
    if (h==1){ 
        printf(" ");
    }
    for (int i=0; i<h; i++){

        for (int j=i+1; j<h; j++){
            printf(" ");
        };
        for (int j=0; j<i+1; j++){
            printf("*");
        };
        printf("\n");
    };
};