#include <stdio.h>

void ToUpperString(char[]);

int main(){
    char string[150];

    printf("Input your target string : ");
    scanf("%[^\n]", string);
    printf("Your string is : %s", string);

    ToUpperString(string);
    printf("\nYour new string is : %s", string);

}
void ToUpperString(char str[]){
    int dist = 'A'-'a';
    
    for (int i=0; str[i]!='\0'; i++){
        if ((str[i]>='a') && (str[i]<='z')){
            str[i]+=dist;
        };
    };

};