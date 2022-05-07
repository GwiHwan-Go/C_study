#include <stdio.h>

int scan();

int main(){
    /* Let's dip in to formating*/
    double PI = 3.12345658;
    scan();
    printf("[%8f][%12.2f]\n",PI, PI);
    printf("[%8g][%12.3g]\n", PI, PI);
    return 0;
};

int scan(){
    
    int age, age2;
    char c;
    printf("당신의 나이는?");
    scanf("%d-%c", &age, &c);

    printf("당신의 나이는 %-4d%-4c이군요. \n", age, c);
    return 0;

}