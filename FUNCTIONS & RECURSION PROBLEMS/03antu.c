/* Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2.*/
#include<stdio.h>
float foa(float);
float foa(float m)
{
        return m*9.8;
}
int main()
{
        int m;
        printf("Enter the mass =");
        scanf("%d",&m);
        printf("The force of attraction on a body of mass %d is %f",m,foa(m));
        return 0;
}