#include <stdio.h>

double FuelEfficiency(double, double);

int main(){
    char flag;
    double fuel, dist;
    do {
        printf("주입 연료량을 입력하시오 : ");
        scanf("%lf", &fuel);
        printf("주행 거리를 입력하시오 : ");
        scanf("%lf", &dist);    
        printf("1L 로 %g 정도를 주행할 수 있습니다.", FuelEfficiency(fuel, dist));   
        printf("다시 계산하시겠습니까?(Y/N) : ");
        scanf(" %c", &flag);
    } while( (flag == 'Y') || (flag == 'y'));
        
    return 0;
};

double FuelEfficiency(double f, double d){

    return d/f;

};


//debugger, 조사식.