#include <stdio.h>

typedef struct person{
    char name[20];
    char phonenum[10][10];
    char address[50];
} personT;

personT InputPerson(void);
void PrintPerson(personT);

void InputPersonList(personT [], int); 
void PrintPersonList(personT [], int);

int ShowMenu(); 
personT Search_by_name(char[]);
// void add_phonenum();
// void revise_phonenum();
// void delete();
// void Quit();
int main(){

    personT persons[5];

    InputPersonList(persons, 5);
    PrintPersonList(persons, 5);
};

personT InputPerson(){
    personT person;
    printf("Input Your Name : ");
    scanf(" %[^\n]", person.name);
    printf("Input Your phoneNum : ");
    scanf(" %[^\n]", person.phonenum);
    printf("Input Your Address : ");
    scanf(" %[^\n]", person.address);  

    return person;
};
void PrintPerson(personT person){

    printf(" Name : %s\n", person.name);
    printf(" phone Number : %s\n", person.phonenum);
    printf(" Address : %s\n", person.address);

};

void InputPersonList(personT persons[], int len){
    for (int i=0; i<len; i++){
        persons[i] = InputPerson();
        printf("%s's information was inputed\n",persons[i].name);
    };
};
void PrintPersonList(personT persons[], int len){
    for (int i=0; i<len; i++){
        PrintPerson(persons[i]);
    };
};

int ShowMenu(){
    int res;
    printf(" 1. 전체 목록 보기\n");
    printf(" 2. 이름으로 검색하여 정보 보기\n");
    printf(" 3. 새 연락처 추가하기\n");
    printf(" 4. 기존 연락처 수정하기\n");
    printf(" 5. 삭제하기\n");
    printf(" 6. 종료하기\n");
    printf(" 위 메뉴 중 하나를 입력하시오 : ");
    scanf("%d", &res);
    return res;
};

personT Search_by_name(char name[]);
// void add_phonenum();
// void revise_phonenum();
// void delete();
// void Quit();