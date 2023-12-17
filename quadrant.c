#include<stdio.h>
int main()
{
    int x;
    printf("Enter the x coordinate : ");
    scanf("%d",&x);
    int y;
    printf("Enter the y coordinate : ");
    scanf("%d",&y);
    if(x==0 && y==0)
      printf("origin");
    else{
    if(x>0 && y>0){
        printf("First Quadrant");
    }
    else if(x<0 && y>0){
        printf("Second Quadrant");
    }
    else if(x<0 && y<0){
        printf("Third Quadrant");
    }
    else if(x>0 && y<0)
        printf("Fourth Quadrant");
    else if(x==0 && y!=0)
      printf("On y axis");
    else if(x!=0 && y==0)
    printf("On x axis");
    }
    return 0;
}