/*program to calculate the sum of numbers stored in an array of size 10.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10], i, sum=0;
    printf("Enter 10 numbers.\n");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The sum of 10 numbers is %d",sum);
    getch();
    return 0;
}
