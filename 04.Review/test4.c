#include <stdio.h>

double get_fuel_efficiency(int distance, int gas);

int main(){
    int start, end, gas;
    double fuel_efficiency;
    printf("출발지점 주행거리계 수치:");
    scanf("%d", &start);
    printf("도착지점 주행거리계 수치:");
    scanf("%d", &end);
    printf("사용 연료량:");
    scanf("%d", &gas);
    fuel_efficiency = get_fuel_efficiency(end-start, gas);
    printf("연료 1리터당 주행 거리는 %.1lf", fuel_efficiency);
    return 0;
}

double get_fuel_efficiency(int distance, int gas){

    return (double) distance/gas;
}
