#include <stdio.h>

typedef struct person{
    char name[20];
    char phonenum[10];
    char address[50];
} personT;

personT InputPerson(void);
void PrintPerson(personT);

int main(){
    personT p1, p2;

    p1 = InputPerson();
    printf("%s's information was inputed\n",p1.name);
    p2 = InputPerson();
    printf("%s's information was inputed\n",p2.name);

    PrintPerson(p1);
    PrintPerson(p2);
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