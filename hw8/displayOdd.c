#include <stdio.h>

void DisplayOdd(int, int, int);

int main(){
    //문제 조건에 따라 scanf 를 쓰지 않음.
    int start = 1, end = 100, step = 5;
    DisplayOdd(start, end, step);};

void DisplayOdd(int s, int e, int m){

    int cnt = 0;
    for (int i = s; i <= e; i++){
        if ((i%m !=0) && (i % 2 != 0)){
            cnt++;
            printf("%d ", i);
        };
        if (cnt>9){
            printf("\n");
            cnt = 0;
        };
    };
};

//debugger, 조사식.