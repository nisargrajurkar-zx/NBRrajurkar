#include<stdio.h>
float force(float m,float g);
float force( float m,float g){
    return m*g;
}

int main(){
    float g=9.8;
    float m;
    printf("emetr the mass of the body :");
    scanf("%f",&m);
    printf("the force of accelearation is :%.2f",force(m,g));
    return 0;
}