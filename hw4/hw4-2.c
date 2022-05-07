#include <stdio.h>

double change_temp(int t);

int main(){
    int temp;
    printf("화씨온도?");
    scanf("%d", &temp);
    printf("화씨 %d도 = 섭씨 %.1f도", temp, change_temp(temp));
    return 0;
}

double change_temp(int t){
    return ((double)5/9)*(t-32);
}