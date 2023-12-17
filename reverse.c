#include <stdio.h>
int main() {
    int n;
    printf("Enter the original number : ");
    scanf("%d",&n);
   int rem,reverse=0;
   int original=n;
    while(n!=0){
       rem=n%10;
       reverse=reverse*10+rem;
       n=n/10;
    }
    int sum=original+reverse;
    printf("Reverse of the number is %d\n",reverse);
    printf("Sum of the original and reverse number is %d",sum);
    return 0;
}