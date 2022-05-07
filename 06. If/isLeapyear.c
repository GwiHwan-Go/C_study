#include <stdio.h>

int isLeap(int);
int monthEnd(int year, int month);
int main(void)
{
    int month, year;

    printf("올해 연도는? ");
    scanf("%d", &year);
    printf("이번 달은? ");
    scanf("%d", &month);
    printf("이번 달의 마지막 날짜는 %d 일입니다.", monthEnd(year, month));

    printf("\nEnd \n");
}

// int isLeap(int year){

//     if (year%4==0){
//         if (year%400==0){
//             return 1;
//         }else if(year%100!=0){
//             return 1;;
//         }else {
//             return 0;
//         }
//     } else {
//         return 0;
//     }
// }

int isLeap(int year){

    return (year%4==0 && year%100!=0)||(year%400==0);
}

// int monthEnd(int year, int month){
//     if(month==2){
//         if(isLeap(year)){
//             return 29;
//         }else{
//             return 28;
//         }
//     }else if(month%2==0 && month!=8){
//         return 30;
//     }else{ //홀수 || month==8
//         return 31;
//     };
// };

int monthEnd(int year, int month){
    switch (month){
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:{
            if(isLeap(year)){
                return 29;
            }else{
                return 28;
            };
        };
        default:
            return 31;
    }
};


