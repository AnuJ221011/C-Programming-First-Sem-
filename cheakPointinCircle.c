#include<stdio.h>
int main() {
    int r=4,a=3,b=4;//centre(3,4),radius=4
    int x;
    printf("Enter the x coordinate : ");
    scanf("%d",&x);
    int y;
    printf("Enter the y coordinate : ");
    scanf("%d",&y);
    if((x-a)*(x-a)+(x-b)*(x-b)<=r*r){
        printf("Point lies inside the circle ");
    }
    else printf("Point lies outside the circle");
    return 0;
    }