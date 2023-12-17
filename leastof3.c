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
    int temp=a;
    if(temp>b){
        temp=b;
        }else if(temp>c){
            temp=c;
        }
    printf("%d is least number of them",temp);
    }