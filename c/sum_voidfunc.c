#include <stdio.h>
void sumofdigits(int n){
int sum=0,digit;
while(n>0){
digit=n%10;
sum=sum+digit;
n=n/10;
}
printf("sum of digits=%d",sum);
}
void main(){
int num;
printf("enter a number: ");
scanf("%d",&num);
sumofdigits(num);
}


