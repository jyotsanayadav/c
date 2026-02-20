#include <stdio.h>
int reversenumber(int n) {
int rev = 0;
while (n > 0) {
rev=rev*10+(n%10);
n=n/10;
}
return rev;
}
int main(){
int num,result;
printf("enter a number: ");
scanf("%d", &num);
result=reversenumber(num);
printf("sum=%d",result);
return 0;
}