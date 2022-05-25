#include <stdio.h>
void swap(int *px, int*py);
int main(){

    int x, y;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;
    *p1 = 17;
    *p2 = 20;
    swap(p1, p2);
    printf("\np2 : %d", *p2);
}

void swap(int *px, int *py){
    // 주소를 복사해서 바꾼거였다!
    int* tmp;

    tmp = px;
    px = py;
    py = tmp;
    printf("%d, %d", *px, *py);
}