#include <stdio.h>
#define PI 3.14159265

int show_circle_area(double); /*절대 잊지말기*/
int show_cylinder_area(double, double);

int main(){
    double r, h, area;
    printf("원기둥 밑면 원의 반지름을 입력하세요 : ");
    scanf(" %lf", &r);
    printf("원기둥의 높이를 입력하세요 : ");
    scanf(" %lf", &h);
    area = show_cylinder_area(h, show_circle_area(r));
    printf("원기둥의 부피는 %.1f 입니다", area);

    return 0;
};

int show_circle_area(double r){

    double area;
    area = PI*r*r;
    return area;
};
int show_cylinder_area(double h, double area){

    return h*area;
};
