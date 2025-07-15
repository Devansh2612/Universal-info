//Write a C program to find maximum and minimum elements in array using recursion.

#include <stdio.h>

int findMax(int arr[], int n, int index) {
    if (index == n - 1)
        return arr[index];
    int maxRest = findMax(arr, n, index + 1);
    return (arr[index] > maxRest) ? arr[index] : maxRest;
}

int findMin(int arr[], int n, int index) {
    if (index == n - 1)
        return arr[index];
    int minRest = findMin(arr, n, index + 1);
    return (arr[index] < minRest) ? arr[index] : minRest;
}

int main() {
    int arr[100], n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Maximum = %d\n", findMax(arr, n, 0));
    printf("Minimum = %d\n", findMin(arr, n, 0));

    return 0;
}

