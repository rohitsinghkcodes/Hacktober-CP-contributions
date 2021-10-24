#include<stdio.h>
int main()
{
    int a[100],i,j,n,swap=0;
    printf("Enter the Size of Array :\n");
    scanf("%d",&n);
    printf("Enter the Value of Array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>=0 && a[j-1]>a[j])
        {
            swap=a[j];
            a[j]=a[j+1];
            a[j]=swap;
            j--;
        }
    }
    printf("The sorted Array be :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}