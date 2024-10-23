/*
Aim:WAP in C to find whether a number is Even or Odd.
Name:Jeevan Poojary
UIN:241A028
DIV:A
Branch:AIDS
*/

#include<stdio.h>

int main()
{
    int n;
    printf("\t\t\t***Even Odd Finder***\n\n\n");

    printf("Enter Number:");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d is Even",n);
    }

    else
    {
        printf("%d is Odd",n);
    }
    return 0;
}
