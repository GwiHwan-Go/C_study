#include <stdio.h>

double Difference(double, double);

int main(){
    double num1, num2, result;
    printf("두수를 입력하시오.");
    scanf("%lf %lf", &num1, &num2);
    result = Difference(num1,num2);
    printf("The result is %g", result);
};

double Difference(double num1, double num2){

    return num1 > num2 ? num1-num2 : num2-num1;
}