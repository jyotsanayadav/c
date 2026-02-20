#include <stdio.h>
void main() {
int num, original, rev = 0;
printf("enter a number: ");
scanf("%d", &num);
original = num;   
while (num != 0) {
int digit = num % 10;
rev = rev * 10 + digit;
num = num / 10;
}
if (original == rev)
printf("palindrome number");
else
printf("not a palindrome number");
}
