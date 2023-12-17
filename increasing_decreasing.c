#include<stdio.h>
int increasing(int n)
{
    if(n==0) return 0;
    printf("%d ",n);
  
    increasing(n-1);
    printf("%d ",n);
    return 0;
    
}
void main()
{
  int n;
  printf("Enter the value of: ");
  scanf("%d",&n);
  increasing(n);
  
}