#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
for (int i=n;i<=10*n;i+=n)
 {
     printf("%d ",i);
 }   
    return 0;
}