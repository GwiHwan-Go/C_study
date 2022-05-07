#include <stdio.h>
double exchange_rate;
void set_rate(double won);
double get_rate(void);
double to_dollar(int won);
int to_won(double dollar);

int main(void)
{
    double ans, won, dollar;
    char input;
    printf("환율은?");
    scanf("%lf", &ans);
    set_rate(ans);
    exchange_rate = get_rate();
    printf("달러 변환하겠습니까?(y/n)");
    scanf("%c", &input);
    printf("hello %c", input);
    if (input=='y'){
        printf("변환할 원화 금액은?");
        scanf("%d", &won);
        dollar = to_dollar(won);
        printf("%d 원은 %g 달러입니다.", won, dollar);
    }
    printf("원화를 변환하겠습니까? (y/n)");
    scanf("%c", &input);
    if (input=='y'){
        printf("변환할 달러 금액은?");
        scanf("%lf", &dollar);
        won = to_won(dollar);
        printf("%g 달러는 %d 원입니다.", dollar, won);
    }


    return 0;
};

void set_rate(double won){
    double input;
    if (won != 0 ){
        printf("\n환율 입력이 완료되었습니다.");
        printf("오늘의 환율은 $1에 %g 원입니다.\n",won);
        exchange_rate = won;
    }else{
        printf("환율 입력 범위를 확인해주십시오.");
        scanf("%lf", &input);
        set_rate(input);
    }
};

double get_rate(void){
    if (exchange_rate != 0){
        return exchange_rate;
    }else{
        printf("환율 설정이 되지 않았습니다.");
        return 0;
    }
};
double to_dollar(int won){

    return won / exchange_rate;
};
int to_won(double dollar){

    return dollar * exchange_rate;
};
