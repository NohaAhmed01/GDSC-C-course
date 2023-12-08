#include <stdio.h>

void main()
{
    float x;
    printf("enter seconds: ");
    scanf("%f",&x);
    printf("%.2f seconds = %.2f seconds\n",x,x);
    printf("%.2f seconds = %.2f minutes\n",x,x/60);
    printf("%.2f seconds = %.2f hours\n",x,x/(60*60));

    return 0;
}