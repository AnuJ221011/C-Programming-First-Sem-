#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
   int rem,sum=0,count=0;

    while(n!=0){
       rem=n%10;
       n=n/10;
       sum+=rem;
        count+=1;
    }
    printf("Count of digit is %d\n",count);
    printf("Sum of digit is %d",sum);

    return 0;
}
        