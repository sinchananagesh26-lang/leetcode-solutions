#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    // Test Case 1: Target is present
    int arr1[] = {1, 3, 5, 7, 9};
    int n1 = 5;
    int target1 = 5;

    printf("Test Case 1: %d\n",
           binarySearch(arr1, n1, target1));

    // Test Case 2: Target is absent
    int arr2[] = {2, 4, 6, 8, 10};
    int n2 = 5;
    int target2 = 7;

    printf("Test Case 2: %d\n",
           binarySearch(arr2, n2, target2));

    return 0;
}