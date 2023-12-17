#include <stdio.h>
int main() {
    int x,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    for(int i=n/2;i>=1;i--){
        if(n%i==0)
        x=i;
        break;
    }
        printf("%d ",x);
        return 0;
}