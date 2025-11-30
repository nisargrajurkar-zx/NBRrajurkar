#include<stdio.h>   
int main(){
    int i=1,sum=0;
    while(i<=10){
        sum +=i;
        i++;
    }
        printf("the value is:%d\n",sum);
    sum=0;
    for(i=0;i<=10;i++){
        sum+=i;
    }
        printf("the value of sum of ten number is:%d\n",sum);
    return 0;



}