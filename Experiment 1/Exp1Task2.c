#include<stdio.h>
//Name:Jeevan Poojary
//Division:A
//Class:AIDS
//UIN:241A028

int main()
{
    int P,C,M,avg;

    printf("\t\t\t Student Eligibility Calculator\n\n\n");

    printf("Enter Physics Marks:");
    scanf("%d",&P);

    printf("Enter Chemistry Marks:");
    scanf("%d",&C);

    printf("Enter Maths Marks:");
    scanf("%d",&M);

    avg=(P+C+M)/3;
    printf("PCM Average is %d\n",avg);

    (avg>=50)?printf("You are Eligible for Admission"):("You are not Eligible for Admission");

    return 0;
}
//Output
//Enter Physics Marks:34
//Enter Chemistry Marks:87
//Enter Maths Marks:98
//PCM Average is 73
//You are Eligible for Admission


