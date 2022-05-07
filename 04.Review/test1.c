#include <stdio.h>
#define PI 3.14159265

int show_circle_area(double); /*절대 잊지말기*/
int show_cylinder_area(double, double);

int main(){
    double i,j;
    i = 0;
    j = 0;
    i++;
    ++j;
    printf("%lf",i);
    printf("%lf",j);

    int c = 3;
    int x= 4, y = 4;
    x = ++c * x ;
    printf("\n%d", c);
    y = c++; /*증감되기전의 c 가 결과값이됨.*/
    printf("\n%d", c);

    printf("\n%d %d", x,y);

    printf("\n%lu",sizeof i);
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
