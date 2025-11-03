#include<stdio.h>
int main(void)
{
    int a[50],size,i;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the array elemnts");
    for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The array elements are");
    for(i=0;i<size;i++)
    {
    printf("%d\t",a[i]);
    }
    return 0;
    }


