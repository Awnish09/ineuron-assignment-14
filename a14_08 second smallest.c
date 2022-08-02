/*program to find the second smallest number in an array.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10], i, j, k, num, a;
    printf("Enter 10 numbers.\n");
    for(i=0; i<=9; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<=9; i++)
    {
        a=arr[i];
        for(j=i+1, k=i; j<=9; j++)
        {
            if(a>arr[j])
            {
                a=arr[j];
                k=j;
            }
        }

        arr[k]=arr[i];
        arr[i]=a;

    }
    printf("The second smallest number among all number is %d.",arr[1]);
    getch();
    return 0;
}
