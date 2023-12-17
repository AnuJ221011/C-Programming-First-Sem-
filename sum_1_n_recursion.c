#include<stdio.h>
int increasing(int sum,int n){

   if(n==1){
        sum+=n;
        return sum;}
    {
   sum=sum+n;
    increasing(sum,n-1);
    
}}
void main()
{
  int n;
  printf("Enter the value of: ");
  scanf("%d",&n);
  int Sum =increasing(0,n);
  printf("%d",Sum);
}