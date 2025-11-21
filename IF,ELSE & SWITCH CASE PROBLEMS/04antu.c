/*Write a program to determine whether a character entered by the user is 
lowercase or not.*/
#include<stdio.h>
int main()
{
        char ch;
        printf("Enter the character=");
        scanf("%c",&ch);
        printf("The character is %c\n",ch);
        printf("The value of the character is %d\n",ch);
        if(ch>=97 && ch<=122)
        {
                printf("The character is lowercase");
        }
        else
        {
                printf("The character is uppercase");
        }        
        return 0;
}