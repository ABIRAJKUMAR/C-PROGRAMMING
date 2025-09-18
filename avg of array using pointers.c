#include <stdio.h>
int main()
{
  int n;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int arr[n], sum = 0;
  printf("Enter elements:\n");
  for (int i = 0; i < n; i++)
    {
     scanf("%d", arr + i);
     sum += *(arr + i);
    }
     printf("Average: %.2f\n", (float)sum / n);
     return 0;
}
