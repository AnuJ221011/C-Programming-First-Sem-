#include <stdio.h>
int main() {
    int n,hcf;
    printf("Enter the value of n: ");
    scanf("%d",&n);
for (int i=n-1;i>=1;i--)
 {
    if(n%i==0){
        hcf=i;
    break;
    }
 }   
     printf("%d ",hcf);
    return 0;
}