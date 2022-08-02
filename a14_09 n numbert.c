/*program in C to read n number of values in an array and display it in reverse order.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, arr[n];
    printf("Enter a numbers.\n");
    scanf("%d",&n);
    //int arr[n];
    printf("Enter %d numbers.\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("\n");
    for(i=n-1; i>=0; i--)
        printf("%d ",arr[i]);
    getch();
    return 0;
}
