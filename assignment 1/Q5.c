#include <stdio.h>

void main()
{
    int x,y;
    printf("enter a 3-digit number: ");
    scanf("%d",&x);
    y=(x%10)*100+(x%100/10)*10+(x%1000/100);
    printf("%d",y);

}