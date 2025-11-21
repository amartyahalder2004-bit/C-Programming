/* Write a program to check whether a given number is prime or not using loops.*/
#include<stdio.h>
int main()
{
        int n,prime=0;
        printf("Enter the number=");
        scanf("%d",&n);
        if(n==1 || n==0)
        {
                prime=1;
        }
        else
        {
                for(int i=2;i<n;i++)
                {
                        if(n%i==0 && n!=2)
                {
                        prime=1;
                        break;
                }
        }
                        if(prime)
                {
                        printf("The number is not prime\n");
                }
                        else
                {
                        printf("The number is prime\n");
                }
        }
        
        return 0;
}