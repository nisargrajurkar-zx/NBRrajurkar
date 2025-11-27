#include<stdio.h>
int main(){
    float area,R,b;
    int H=5;
    printf("enter a radius of circle:");
    scanf("%f",&R);
    area=3.14*R*R;
    b=3.14*R*R*H;
    
    
    printf("area of circle:%f\n",area);
    printf("area of cylinder:%f\n",b);
    return 0;
}