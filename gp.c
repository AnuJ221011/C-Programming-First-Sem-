#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=1;
    int r=2;
for (int i=1;i<=n;i++)
 {
     printf("%d ",a);
     a=a*r;
 }   
    return 0;}