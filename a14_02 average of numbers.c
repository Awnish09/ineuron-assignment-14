/*program to calculate the average of numbers stored in an array of size 10.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10], i, sum=0;
    float ave;
    printf("Enter 10 numbers.\n");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    ave=sum/10.0;
    printf("The average of 10 numbers is %f",ave);
    getch();
    return 0;
}
