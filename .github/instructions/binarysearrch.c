#include <stdio.h>

int binarysearch(int n, int array[]) {

    int low = 0;
    int high = n - 1;
    int target;

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    while (low <= high) {

        int mid = (low + high) / 2;

        if (array[mid] == target) {
            return mid;
        }
        else if (array[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;   
}

int main() {

    int arr[] = {2, 3, 4, 10, 40};


    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarysearch(n, arr);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index: %d\n", result);

    return 0;
}
