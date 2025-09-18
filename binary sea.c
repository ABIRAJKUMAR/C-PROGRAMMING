#include <stdio.h>
// Function to perform binary search using recursion
int binarySearch(int arr[], int left, int right, int target) {
if (left > right) {
return -1; // Element not found
}
int mid = left + (right - left) / 2;
if (arr[mid] == target) {
return mid; // Element found
} else if (arr[mid] > target) {
return binarySearch(arr, left, mid - 1, target); // Search left half
} else {
return binarySearch(arr, mid + 1, right, target); // Search right half
}
}
int main() {
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int target = 5;
int size = sizeof(arr) / sizeof(arr[0]);

int result = binarySearch(arr, 0, size - 1, target);
if (result != -1) {
printf("Element found at index %d\n", result);
} else {
printf("Element not found\n");
}
return 0;
}
