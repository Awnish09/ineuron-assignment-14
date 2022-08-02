/*program to find the smallest number stored in an array of size 10.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10], i, num, a;
    printf("Enter 10 numbers.\n");
    for(i=0; i<=9; i++)
        scanf("%d",&arr[i]);
    a=arr[0];
    for(i=0; i<=9; i++)
    {
        if(a>arr[i])
            a=arr[i];
    }
    printf("The smallest number among all numbers is %d",a);
    getch();
    return 0;
}
