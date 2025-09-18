//program_10//
#include <stdio.h>
int main()
{
int dividend,divisor,quotient,remainder;
printf("Enter dividend: ");
scanf("%d",&dividend);
printf("Enter divisor: ");
scanf("%d",&divisor);
quotient=0;
while(dividend>=divisor)
{
dividend-=divisor;
quotient++;
}
remainder=dividend;
printf("Quotient: %d\n",quotient);
printf("Remainder: %d\n",remainder);
return 0;
}
