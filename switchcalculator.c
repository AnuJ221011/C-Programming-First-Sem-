#include<stdio.h>
int main() {
    char op;
    int x;
    printf("Enter the first number: ");
    scanf("%d",&x);
    int y;
    printf("Enter the second number : ");
    scanf("%d",&y);
    printf("Enter the operation you want : ");
    scanf("%d",&op);
    switch(op){
        case'+':printf("%d",x+y);
        break;
        case'-':printf("%d",x-y);
        break;
        case'*':printf("%d",x*y);
        break;
        case'/':printf("%d",x/y);
        break;
    
    }
    return 0;
}