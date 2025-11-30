#include<stdio.h>
int main(){
    int i,a;
    int fact=1;
    printf("enter a number you whant to find factorial:");
    scanf("%d",&i);
    


    for(a=1;a<=i;a++){
        fact*=a;
    }
    printf("the factorial of number is :%d",fact);
    return 0;

}