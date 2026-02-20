#include <stdio.h>
void main(){
int n,i;
int a=0,b=1,sum;
printf("Enter n: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("%d",a);
sum=a+b;
a=b;
b=sum;
}
}