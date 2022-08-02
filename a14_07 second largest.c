/*program to find second largest in an array..*/

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
        //printf("%d ",a);
        arr[k]=arr[i];
        arr[i]=a;

    }
    printf("The second largest number among all number is %d.",arr[8]);
    getch();
    return 0;
}
