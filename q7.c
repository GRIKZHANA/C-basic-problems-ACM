#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
        c=a;
        a=b;
        b=c;
        printf("After swapping the two numbers are : a=%d,b=%d\n",a,b);
        return 0;
    }