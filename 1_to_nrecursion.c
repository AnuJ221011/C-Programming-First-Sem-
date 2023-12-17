#include<stdio.h>
int increasing(int x,int n)

    {
    if(x==0|| x>n) return 0;
    printf("%d ",x);
   
    
    increasing(x+1,n);
   
}
void main()
{
  int n;
  printf("Enter the value of: ");
  scanf("%d",&n);
  increasing(1,n);
}