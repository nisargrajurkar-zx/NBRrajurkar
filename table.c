#include<stdio.h>
int main(){
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        printf("%d x %d=%d\n",i,n,i*n);
    }
    


    // in reverse order

  for(i=10;i>0;i--){
        printf("%d x %d=%d\n",i,n,i*n);
    }
    return 0;
}
