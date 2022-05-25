#include <stdio.h>
#include <math.h>

typedef struct line { 
    double x1;
    double y1;
    double x2;
    double y2; 
} lineT;
double GetLineLength(lineT);
lineT InputLine();


int main(void)
{
    lineT l1;
    l1 = InputLine();

    printf("The length of line is %g", GetLineLength(l1));

};

double GetLineLength(lineT l1){
    printf("%lf", exp(l1.x1-l1.x2));
    return sqrt(pow((l1.x1-l1.x2),2)+pow((l1.y1-l1.y2),2));
};

lineT InputLine(){
    lineT l1;
    printf("input the start coordinates : ");
    scanf("%lf %lf", &l1.x1, &l1.y1);
    printf("input the end coordinates : ");
    scanf("%lf %lf", &l1.x2, &l1.y2);
    return l1;
};
