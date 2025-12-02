#include<stdio.h>
int main(){
    int a[100],freq[100];
    int n ,i,j,count;
    printf("Enetr the size of array:");
    scanf("%d",&n);
    printf("Enetr the elements of arrays:\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    // frequency calculation
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
        printf("enetr frequency\n");
        for(i=0;i<n;i++){
            if(freq[i]!=0){
            printf("%d\t %d\n",a[i],freq[i]);
        }
        }
return 0;
}