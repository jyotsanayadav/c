#include <stdio.h>
void reversenumber(int n) {
int rev = 0;
while (n > 0) {
rev=rev*10+(n%10);
n=n/10;
}
printf("reverse=%d",rev);
}
void main(){
int num;
printf("enter a number: ");
scanf("%d", &num);
reversenumber(num);
}