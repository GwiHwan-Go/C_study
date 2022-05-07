/* make user defined function -> fail */
#include <stdio.h>

int introduce(){

    printf("\n인공지능융합전공 2018314374 고귀환\n");

    return 0;
}

int drawLine(){
    for(int i=0; i<40; i++){
        printf("-");
    }
    return 0;
}


int refined_introduce(){
    drawLine();
    introduce();
    drawLine();

    return 0;
}

int info(){
    printf("\n파이썬이 주 사용 언어이고 C는 기초 중 기초밖에 알지못합니다. 잘부탁드립니다.\n");

    return 0;
}

int main(){
    refined_introduce();
    info();
    refined_introduce();
}