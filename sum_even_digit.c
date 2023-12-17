#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
   int rem,sum=0,product=1,count=0;
  int sumevendigit=0;
  int sumdigitevenplace=0;
    while(n!=0){
       rem=n%10;
       n=n/10;
       sum+=rem;
      product*=rem;
        count+=1;
        if(count%2==0)
        {
            sumdigitevenplace+=rem;
        }
        if(rem%2==0)
        sumevendigit+=rem;
    }
    printf("sum of digit is %d\n",sum);
    printf("Count of digit is %d\n",count);
    printf("Product of digit is %d\n",product);
    printf("Sum of digit at even place is %d\n ",sumdigitevenplace);
    printf("Sum of evendigit is %d ",sumevendigit);

    return 0;
}