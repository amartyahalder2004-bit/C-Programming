/* Write a function to convert Celsius temperature into Fahrenheit.*/
#include<stdio.h>
float c2f(float);
float c2f(float c)
{
        return ((9*c)/5.0)+32;
}
int main()
{
        int c;
        printf("Enter the temperature in celsius =");
        scanf("%d",&c);
        printf("The temperature in fahrenheit is %f",c2f(c));
        return 0;
}