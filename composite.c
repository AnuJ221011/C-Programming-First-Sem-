#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int check=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0)
        { 
            check=1;
            break;
        }
    
    }
    if(check==0) printf("prime");
    else printf("composite");
        return 0;
}