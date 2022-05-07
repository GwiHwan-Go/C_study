#include <stdio.h>
/*동전의 갯수를 최소화하려면 최대한 큰 금액 동전을 많이 만들어야 한다.*/
int get_500(int money);
int get_100(int money);
int get_50(int money);
int get_10(int money);
int get_0(int money);

int main(){

    int money;
    printf("교환활 돈은 얼마입니까?");
    scanf("%d", &money);
    printf("오백원짜리 : %d개\n", get_500(money));
    money%=500;
    printf("백원짜리 : %d개\n", get_100(money));
    money%=100;
    printf("오십원짜리 : %d개\n", get_50(money));
    money%=50;
    printf("십원짜리 : %d개\n", get_10(money));
    money%=10;
    printf("교환 후 남은 돈 : %d원", money); 
    return 0;
};

int get_500(int money){

    return money / 500;
};
int get_100(int money){

    return money / 100;
};
int get_50(int money){

    return money / 50;
};
int get_10(int money){

    return money / 10;
};