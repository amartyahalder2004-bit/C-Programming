/*Repeat problem 3 for a general input provided by the user using scanf.*/
#include<stdio.h>
int main()
{
        int arr[10];
        int n,i;
        printf("Enter the number =");
        scanf("%d",&n);
        for(i=0;i<10;i++)
        {
                arr[i]=n*(i+1);
        }
        for(i=0;i<10;i++)
        {
                printf("The value of %d * %d = %d\n",n,i+1,arr[i]);
        }
        return 0;
}