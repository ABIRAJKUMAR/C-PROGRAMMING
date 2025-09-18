#include<stdio.h>
int show(int n)
{
    if(n==0)
    {
        return 0;

    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
            return show(n-1)+show(n-2);
    }
}
    int main()
{

        int n;
        int t;
        printf("Enter the number :");
        scanf("%d",&n);
        t=show(n);
        printf("The factorial is :%d",t);
        return 0;

}
