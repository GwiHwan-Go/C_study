#include <stdio.h>

int isLeapyear(int);

void main(void){

    int year, result ;
    printf("what year?\n");
    scanf("%d", &year);
    result = isLeapyear(year);
    if (year){
        printf("%d 는 윤년",year);
    }else{
        printf("%d 는 윤년x",year);

    }
    

}

int isLeapyear(int year){

    if ((year%4==0)&&(year%100!=0)){
        return 1;
    };
    if (year%400==0){
        return 1;
    };
    return 0;
    };