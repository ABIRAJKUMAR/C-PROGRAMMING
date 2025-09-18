//APPLICATION-03//
#include <stdio.h>
#define MAX_ITEMS 100
int main()
{
    int itemCount;
    float prices[MAX_ITEMS];
    int quantities[MAX_ITEMS];
    float totalBill = 0.0;
    float matchDayDiscount = 0.1;
    float discountAmount;
    printf("Enter the number of different items ordered: ");
    scanf("%d", &itemCount);
    for (int i = 0; i < itemCount; i++)
    {
        printf("Enter the price for item %d: ", i + 1);
        scanf("%f", &prices[i]);
        printf("Enter the quantity for item %d: ", i + 1);
        scanf("%d", &quantities[i]);

        totalBill += prices[i] * quantities[i];
    }
    discountAmount = totalBill * matchDayDiscount;
    totalBill -= discountAmount;
    printf("\nTotal Bill (after match day discount): %.2f\n", totalBill);
    printf("Discount applied: %.2f\n", discountAmount);
    return 0;
}

