#include <stdio.h>

int main(void){
    
    double num1, num2;
    char c1;
    printf("첫 번째 실수는? ");
    scanf("%lf", &num1);
    printf("두 번째 실수는? ");
    scanf("%lf", &num2);
    printf("하나의 문자는? ");
    scanf(" %c", &c1);
    printf("[%10g]\n[%10g]\n[%10c]", num1, num2, c1);

    return 0;
    
}
