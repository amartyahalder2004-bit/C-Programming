/*Write a program using function to find average of three numbers.*/
#include<stdio.h>
float average(int a,int b,int c);
float average(int a,int b,int c)
{
        return (a+b+c)/3.0;
}
int main()
{
        int a,b,c;
        printf("Enter the 1st number =");
        scanf("%d",&a);
        printf("Enter the 2nd number =");
        scanf("%d",&b);
        printf("Enter the 3rd number =");
        scanf("%d",&c);
        printf("The average of the three number is %f",average(a,b,c));
        return 0;
}