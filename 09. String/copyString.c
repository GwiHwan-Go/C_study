#include <stdio.h>

void StringCopy(char[], char[]);
int CheckCopy(char[], char[]);


int main(){
    char string[150], result[150];
    int flag ;
    printf("Input your target string : ");
    scanf("%[^\n]", string);
    StringCopy(string, result);

    printf("You copid string as : %s", result);
    flag = CheckCopy(string, result);
    if (flag){
        printf("\nTwo strings are same.");
    }else{
        printf("\nTwo strings are different.");
    };
    return 0;

}
void StringCopy(char str[], char result[]){
    
    for (int i=0; str[i]!='\0'; i++){
        result[i] = str[i];
        };
    };

int CheckCopy(char str[], char result[]){
    int flag = 1;
    for (int i=0; str[i]!='\0'; i++){
        if (result[i] != str[i]){
            flag = 0;
            break;
        };
        };
    return flag;
};
