#include<stdio.h>
int main()
{
    int a;
    printf("Enter the first side length :");
    scanf("%d",&a);
    int b;
    printf("Enter the second side length :");
    scanf("%d",&b);
    int c;
    printf("Enter the third side length :");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b)
    {
         if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
        printf("It is a right angle triangle triangle");
         else 
         printf("It is not a right angle triangle triangle");
    }
    else 
    printf("It is not a valid triangle");
}