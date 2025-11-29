#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character to find it is upper or not:");
    scanf("%c",&ch);
    printf(" The character is %c\n",ch);
    printf("The valuue of character is%d\n",ch);
    if(ch>=97 && ch<=122){
        printf("the character is lowercase");
    }
    else{
        printf(" the character is not lowercase");
    }
    return 0;
}