/*program to copy the elements of one array into another array.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int ar1[10], ar2[10], i, a;
    printf("Enter 10 numbers.\n");
    for(i=0; i<=9; i++)
        scanf("%d",&ar1[i]);
    printf("\n");
    for(i=0; i<=9; i++)
    {
        ar2[i]=ar1[i];
        printf("%d ",ar2[i]);
    }
    getch();
    return 0;
}
