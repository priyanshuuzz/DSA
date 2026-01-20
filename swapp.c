#include <stdio.h>

void swaparray(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int temp;

    while (s < e) {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    swaparray(arr, n);

    return 0;
}
