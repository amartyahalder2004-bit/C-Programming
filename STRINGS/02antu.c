/*Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal.*/
#include<stdio.h>
int strlen(char str[])
        {
                int i=0,count;
                char c=str[i];
                while(c!='\0')
                {
                        c=str[i];
                        i++;
                }
                count=i-1;
                return count;
        }
int main()
{
        char str[]="Amartya";
        printf("%d",strlen(str));
        return 0;
}