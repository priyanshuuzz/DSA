//fint intersection of two arrays
#include <stdio.h>

void insterction(int arr1[], int n1, int arr2[], int n2)(
    for(int i = 0; i < n1; i++){
        int element = arr1[i];
        for(int j =i+1; j<2;j++)
        {
            if(element==arr2[j]){
                
            }
        }
    }
    void intersection(int arr1[], int n1, int arr2[], int n2) {
    printf("Intersection elements are: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }
    printf("\n");
}   
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1, n1, arr2, n2);

    return 0;
}