/*program to calculate the sum of all even numbers and sum of all odd*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10], i, evensum=0, oddsum=0;
    printf("Enter 10 numbers.\n");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2)
            oddsum+=arr[i];
        else
            evensum+=arr[i];
    }

    printf("The sum of even numbers is %d\nAnd the sum of odd number is %d",evensum, oddsum);
    getch();
    return 0;
}
