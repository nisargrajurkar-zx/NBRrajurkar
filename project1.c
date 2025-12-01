#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){


 srand(time(0));

 int randomnumber=(rand() % 100) +1;
 int no_of_guess=0;
 int guessed_number;


 do{
    printf("guesssed the number\n");
    scanf("%d",&guessed_number);
    if(guessed_number>randomnumber){
        printf("lower number please!\n");
    }
    else if(guessed_number<randomnumber){
        printf("higher number please\n");
    }
    else{
        printf("congruate ! you guess the correct number\n");
    }
    no_of_guess++;
 }while(guessed_number != randomnumber);
 printf("you guess the number %d  in guesssded:",no_of_guess);
 return 0;
}
