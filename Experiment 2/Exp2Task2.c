#include<stdio.h>

int main() {
     int start, i,end, sum=0;

     printf("Enter the start value:");
     scanf("%d",&start);

     printf("Enter the ending value:");
     scanf("%d",&end);

    for(i=start; i<=end; i++)
    if(i%2!=0)
    {
    sum=sum+i;
    }
    printf("\nSum of all the odd numbers between %d and %d is :%d",start, end, sum);
    return 0;
}