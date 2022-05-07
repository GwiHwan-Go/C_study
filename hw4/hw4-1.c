#include <stdio.h>

void divideReal(double);

int main(){
    double num;
    printf("실수 :");
    scanf("%lf", &num);
    divideReal(num);
    return 0;
};

void divideReal(double num){
    int int_num;
    int_num = num;
    printf("정수부는 %d 이고 소수부는 %.6g 이다.", int_num, num-int_num);
}