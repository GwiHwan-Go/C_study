#include <stdio.h>
void convertTimeToHMS(int time, int* hour, int* min, int* sec);
int main(){

    int time, hour, min, sec;

    printf("input the time");
    scanf("%d", &time);

    convertTimeToHMS(time, &hour, &min, &sec);
    printf("%d hour %d min %d sec", hour, min, sec);
}

void convertTimeToHMS(int time, int* phour, int* pmin, int* psec){
    // 주소를 복사해서 바꾼거였다!
    int* tmp;

    *phour = time / 3600;
    *pmin = (time-*phour*3600) / 60;
    *psec = time % 60;
}