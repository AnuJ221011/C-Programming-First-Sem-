//Take 3 positive number and print least of them.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the first number :");
    scanf("%d",&a);
    int b;
    printf("Enter the second number :");
    scanf("%d",&b);
    int c;
    printf("Enter the third number :");
    scanf("%d",&c);
    if(a<b){
        if(a<c)printf("%d is least number",a);
        else printf("%d is least number",c);
    }
    else
    {
        if(b<c)printf("%d is least number ",b);
        else printf("%d is least number",c);
    }
}