#include <stdio.h>
int main() {
    int cp;
    printf("Enter the cost price : ");
    scanf("%d",&cp);
    int sp;
    printf("Enter the selling price : ");
    scanf("%d",&sp);
    if(cp>sp) {
        printf("Loss\n");
        printf(" Loss of %d %)",(cp-sp)*100/cp);
    }
    else if(sp>cp) {
        printf("Profit\n");
        printf("Profit of %d percent",(sp-cp)*100/cp);
    }
    else printf("No Profit No Loss");
}