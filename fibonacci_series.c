#include<stdio.h>
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
int fibo(int a){
    if (a==1 || a==2){
        return a-1;
    }
    return fibo(a-1)+fibo(a-2);
}

int main(){
    int a=7;

    printf("the fibonacchi series  is :%d",fibo(a));
    return 0;
}