#include <stdio.h>

int InputNum(void);
int GetIntegerArray(int[], int, int);
void PrintIntegerArray(int[], int);
double AverageIntegerArray(int[], int);

int main(){

    int nums[100];
    double result;
    int size;

    size = GetIntegerArray(nums, 100, -1);
    result = AverageIntegerArray(nums, size);
    printf("The array is : ");

    PrintIntegerArray(nums,size);
    printf("\nThe average of array is %g", result);
    return 0;
};
int GetIntegerArray(int nums[], int size, int s){
    int num;
    int idx = 0;
    while (idx <= size){
        printf("숫자를 입력하세요 : ");
        scanf("%d", &num);
        if (num==s) break;
        nums[idx] = num;
        idx++;
    };

    return idx;
};
void PrintIntegerArray(int nums[], int size){
    for (int i = 0; i<size; i++){
        printf("%d ", nums[i]);
    };
};

double AverageIntegerArray(int nums[], int size){
    int result;
    for (int i = 0; i<size; i++){
        result+=nums[i];
    };
    return result/size;
};
