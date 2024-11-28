#include <stdio.h>
int main() {
int n;
printf("\t\t** Array Reverser ** \n\n");
// Input the size of the array
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
int *ptr = arr; // Pointer to the array
// Input the elements of the array
printf("Enter the elements of the array:\n");
for (int i = 0; i < n; i++) {
printf("%d :", i);
scanf("%d", ptr + i); // Input directly into array elements using pointer
}
// Print the elements in reverse order using pointer
printf("\nArray elements in reverse order:\n");
for (int i = n - 1; i >= 0; i--) {
printf("%d ", *(ptr + i)); // Access elements using pointer
}
printf("\n");
return 0;
}