#include<stdio.h>
void main()
{
    int i,j,n;
    printf("number of total integer to reverse is");
    scanf("%d",&n);
    int a[n];
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d\n",a[j]);
    }

}
