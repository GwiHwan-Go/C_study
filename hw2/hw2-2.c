#include <stdio.h>
#define PI 3.14159265

void show_circle_area(double); /*절대 잊지말기*/

int main(){
    show_circle_area(1);
    show_circle_area(10);

    return 0;
};

void show_circle_area(double r){

    double area;
    area = PI*r*r;
    printf("%g\n", area);

};