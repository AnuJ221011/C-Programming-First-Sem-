#include<stdio.h>
int main()
{
    int n;
    printf("Enter the percentage grade of student : ");
    scanf("%d",&n);
    if(n>=81 && n<=100){
        printf("VERY GOOD");
    }
    else if(n>=61 && n<=80){
        printf("GOOD");
    }
    else if(n>=41 && n<=60){
        printf("AVERAGE");
    }
    else if(n<40)
        printf("FAIL");
    else 
    printf("%d is not a valid percentage grade",n);
    return 0;
}