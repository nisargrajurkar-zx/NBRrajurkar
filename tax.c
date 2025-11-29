#include<stdio.h>
int main(){
    int income , tax=0;
    printf("enter a amount :\n");
    scanf("%d",&income);
    if (income<=250000){
        tax=0;
    }
    else if(income>250000 && income<500000){
        tax=0.05*(income-250000);
    }
    else if(income>500000 && income<1000000){
        tax=0.05*(500000 -250000) + 0.2*(income-500000);
    }
       
    else{
        tax=0.05*(500000 -250000)+0.2*(500000-1000000)+ 0.3*(income-10000000) ;
       }
       printf("the taxed you have given to government is %d\n",tax);
    return 0;
}