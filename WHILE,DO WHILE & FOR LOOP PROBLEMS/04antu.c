/*Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.*/
#include<stdio.h>
int main()
{
        /*DO WHILE LOOP*/
        /*int i=1,sum=0;
        do
        {
                sum+=i;
                i++;
        } while (i<=10);
        printf("The sum is %d",sum);
        return 0;*/
        int sum=0;
        for (int i=1;i<=10;i++  )  
        {
                sum+=i;
        }
        printf("The sum is %d",sum);
        return 0;
        
}