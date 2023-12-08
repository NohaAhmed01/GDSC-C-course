#include <stdio.h>
int main()
{
    int t;
    double c,k;
    printf("Enter temperature in fahrenheit: ");
    scanf("%d", &t); 
    c= 5*((double)t-32)/9;
    k= c+ 273.15;
    printf("celsius = %.3f degrees",c);
    printf("\nkelvin = %.3f degrees",k);

    return 0;
}