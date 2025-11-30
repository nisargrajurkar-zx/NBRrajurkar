#include<stdio.h>
int main(){
    int a,i,prime=0;
    printf("enter a number to find is it prime or not");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            prime=1;
        }

    }
    if(prime){
      printf("the number is not prime:%d",a);
    }
    else{
        printf("the number is prime:%d",a);
    }
    return 0;
}