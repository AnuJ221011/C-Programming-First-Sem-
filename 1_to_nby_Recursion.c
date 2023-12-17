#include<stdio.h>
void increasing(int n)
{
    if(n==0) return ;
    increasing(n-1);
    printf("%d ",n);
    return ;
}
void main()
{
  int n;
  printf("Enter the value of: ");
  scanf("%d",&n);
  increasing(n);
  
}