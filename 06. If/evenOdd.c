#include <stdio.h>

int main(void)
{
    int num;

    printf("## 정수 짝수? 홀수? ##\n");
    printf("정수? :");
    scanf("%d", &num);

    if (num==0){
        printf("%d는 0\n", num);
    }else if(num>0){
        printf("%d는 양수\n", num);
    }else{
        printf("%d는 음수\n", num);
    };

    printf("\n End \n");
}