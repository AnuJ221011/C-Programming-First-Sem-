#include<stdio.h>
int main()
{
    int n;
    printf("Enter any positive integer : ");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        if(n%3==0 && n%5==0)printf("%d is divisible 3 ,5 and also with 15",n);
        else printf("%d is divisible by 3 or 5 but not by 15",n);
    }
    else 
     printf("%d is neither divided by 3 nor by 5",n);
    return 0;
}