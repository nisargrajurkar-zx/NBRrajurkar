#include<stdio.h>
float average(int a, int b , int c);
float average(int a, int b, int c){

  return (a+b+c)/3.0;
}

  int main(){
    int a=5,b=4,c=6;
    float avg;
    avg=average(a,b,c);
    printf("the average of 3 number is  :%f\n", avg);
    return 0;
}