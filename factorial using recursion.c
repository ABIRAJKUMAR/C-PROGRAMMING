#include <stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("NEGATIVE NUMBER");
    }
    else
    {
        printf("%d = %d\n",n,fact(n));
    }
return 0;
}
