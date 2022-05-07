#include <stdio.h>
#define PI 3.14159265

void show_circle_area_1(void);
void show_circle_area_10(void);

int main(){
    show_circle_area_1();
    show_circle_area_10();

    return 0;
};

void show_circle_area_1(){

    float area;
    area = PI*1*1;
    printf("%g\n", area);

};
void show_circle_area_10(){

    float area;
    area = PI*10*10;
    printf("%f\n", area);

};