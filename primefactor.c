#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(n==1) flag=false;
    return flag;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(isPrime(i))
            printf("%d",i);
        }
    }
}