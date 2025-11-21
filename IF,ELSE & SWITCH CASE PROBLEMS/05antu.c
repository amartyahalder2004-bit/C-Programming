/*Write a program to find greatest of four numbers entered by the user.*/
#include<stdio.h>
int main()
{
        int a,b,c,d;
        printf("Enter the 1st number=");
        scanf("%d",&a);
        printf("Enter the 2nd number=");
        scanf("%d",&b);
        printf("Enter the 3rd number=");
        scanf("%d",&c);              
        printf("Enter the 4th number=");
        scanf("%d",&d);
        if(a>b && a>c && a>d)
        {
                printf("The greatest number is %d",a);
        }
        else if (b>c && b>d && b>a)
        {
                printf("The greatest number is %d",b);  
        }
        else if(c>b && c>d && c>a)
        {
                printf("The greatest number is %d",c);
        }
        else if(d>a && d>b && d>c)
        {
                printf("The greatest number is %d",d);
        }
        return 0;
}        