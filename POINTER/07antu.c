/*Try problem 3 using call by value and verify that it does not change the value of 
the said variable.*/
#include<stdio.h>
void changes_to_ten_times(int);
void changes_to_ten_times(int a)
{
        a=a*10;
}
int main()
{
        int n;
        printf("Enter the number=");
        scanf("%d",&n);
        printf("The value of n is %d\n",n);
        changes_to_ten_times(n);
        printf("Now the value of n when it is ten time is %d\n",n);
        return 0;
}
