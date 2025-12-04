#include<stdio.h>
float cf(float a);
float cf(float a){
    return (((9*a)/5)+32);
}

int main(){
    float a;
    float cfd;
    printf("enetr the degree celcious:");
    
    scanf("%f",&a);
    cfd=cf(a);
    printf("the celcious to feherenheit is %.2f",cfd);
    return 0;
}