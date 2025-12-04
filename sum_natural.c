#include<stdio.h>

int sum_natural(int n){
    if (n==1){
        return 1;
    }
    return n+sum_natural(n-1);
}
int main (){
    int n;
    printf("enetr a number to find the sum of this number:");
    scanf("%d",&n);
    printf("the sum of natural number is :%d",sum_natural(n));
    return 0;
}