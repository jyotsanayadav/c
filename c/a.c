#include <stdio.h> 
int main() { 
int n; 
printf("Enter matrix size (n x n): "); 
scanf("%d", &n); 
int a[n][n], b[n][n], add[n][n], sub[n][n]; 
printf("Enter elements of matrix A:\n"); 
for(int i=0;i<n;i++) 
for(int j=0;j<n;j++) 
scanf("%d", &a[i][j]); 
printf("Enter elements of matrix B:\n"); 
for(int i=0;i<n;i++) 
for(int j=0;j<n;j++) 
scanf("%d", &b[i][j]); 
for(int i=0;i<n;i++) 
for(int j=0;j<n;j++) { 
add[i][j] = a[i][j] + b[i][j]; 
sub[i][j] = a[i][j] - b[i][j]; 
} 
printf("Addition Result:\n"); 
for(int i=0;i<n;i++) { 
for(int j=0;j<n;j++) printf("%d ", add[i][j]); 
printf("\n"); 
} 
printf("Subtraction Result:\n"); 
for(int i=0;i<n;i++) { 
for(int j=0;j<n;j++) printf("%d ", sub[i][j]); 
printf("\n"); 
} 
return 0; 
}