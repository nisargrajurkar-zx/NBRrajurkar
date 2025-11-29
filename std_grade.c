#include<stdio.h>
int main (){
    int marks1,marks2,marks3;
    printf("enter marks 1:");
    scanf("%d",&marks1);
    printf("enter marks 2:");
    scanf("%d",&marks2);

    printf("enter marks 3:");
    scanf("%d",&marks3);
    printf("your marks is %d %d and %d \n",marks1, marks2,marks3);
    if (marks1<33 || marks2<33 ||marks3<33){
        printf("you are fail due to less marks in individual subject\n"); 
    }
        else if((marks1+marks2+marks3)/3<40){
            printf("you are fail because your average marks is also less than 40\n");
        }
        else{
            printf(" you are pass in the exam\n");        
    }
    return 0;
}
