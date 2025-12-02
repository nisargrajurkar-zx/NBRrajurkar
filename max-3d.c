#include<stdio.h>
int main(){
    int a[2][2][3]={
        {{1,2,3},{4,5,6}},
        {{7,8,9},{10,11,12}}
    };
int i,j,k,max;
max=a[0][0][0];
for(i=0;i<2;i++){
 for(j=0;j<2;j++){
  for(k=0;k<3;k++){

printf("a[%d][%d][%d]=%d\n",i,j,k,a[i][j][k]);
    if(a[i][j][k]>max){
    max=a[i][j][k];}}}}
printf(" maximun element is : a[%d][%d][%d]=%d\n",i,j,k,max);


return 0;
}