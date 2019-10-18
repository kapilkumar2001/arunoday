#include<stdio.h>
int sum(int );
int main()
{
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int a)
{
    int s=0;
    if(a>=0)
    s=a+sum(a-1);
    return s;

}
