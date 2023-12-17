#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
   int rem,product=0,count=0;

    while(n!=0){
       rem=n%10;
       n=n/10;
       product*=rem;
        count+=1;
    }
    printf("Count of digit is %d\n",count);
    printf("Product of digit is %d",product);

    return 0;
}