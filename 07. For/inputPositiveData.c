#include <stdio.h>

int InputPositiveData(void);

int main(){

    int age;
    age = InputPositiveData();

    if (age > 19){
        printf("%d 세는 19세 이상이니 성년 입니다.\n", age);
    }else{
        printf("%d 세는 19세 이하이니 미성년 입니다.\n", age);
    };

    return 0;
};

int InputPositiveData(){
    int age;
    do {
        printf("나이를 입력하세요 : ");
        scanf("%d", &age);
    } while( age < 0 );
        
    return age;
};