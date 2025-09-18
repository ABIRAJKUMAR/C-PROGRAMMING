#include<stdio.h>
int binarySearch(int array[], int target, int low, int high)
{
 if (low > high)
{
 return -1;
}
 int mid = low + (high - low) / 2;
 if (array[mid] == target)
{
 return mid;
}
 else if (array[mid] > target)
{
 return binarySearch(array, target, low, mid - 1);
}
 else
 {
 return binarySearch(array, target, mid + 1, high);
 }
 }
 int main()
 {
 int n, target;
 scanf("%d", &n);
 int array[n];
 for (int i = 0; i < n; i++)
 {
 scanf("%d", &array[i]);
 }
 scanf("%d", &target);
 int result = binarySearch(array, target, 0, n - 1);
 if (result == -1)
 {
 printf("Element not found in the array.\n");
 }
  else
 {
     printf("%d\n", result);
 }
 return 0;
 }

