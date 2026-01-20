#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swaparray(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        swap(&arr[s], &arr[e]);
        s++;
        e--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int a = 5;
    int b = 10;

    swap(&a, &b);
    printf("%d %d\n", a, b);

    int arr[] = {1, 3, 5, 7, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    swaparray(arr, n);

    return 0;
}
