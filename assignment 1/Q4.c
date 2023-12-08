#include <stdio.h>

void main()
{
    int x,y;
    printf("enter two numbers: ");
    scanf("%d%d",&x,&y);
    printf("first no. is %d \nsecond no. is %d",x,y);
    x=x^y;   
    y=x^y;   
    x=x^y;      
    printf("\nafter swaping=> \nfirst no. is %d \nsecond no. is %d",x,y);

    return 0;

}