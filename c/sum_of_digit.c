#include <stdio.h>
void main() {
int num,sum=0;
printf("enter a number: ");
scanf("%d",&num);
while(num!= 0) {
int digit=num%10;
sum=sum+digit;
num=num/10;
}
printf("Sum of digits: %d", sum);
}
