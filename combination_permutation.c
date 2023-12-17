#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}

int combination(int n,int r){
int ncr=factorial(n)/(factorial(n-r)*factorial(r));
return ncr;
}

int permutation(int n,int r){
  int  npr=factorial(n)/factorial(n-r);
    return npr;
}

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int result = combination(n,r);
    printf("%d\n",result);
    int npr = permutation(n,r);
    printf("%d",npr);

}