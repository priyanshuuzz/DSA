//find duplicate element in an array
#include<stdio.h>

void duplicate( int n , int arr[] ) {
    int ans = 0;
    for ( int i = 0; i < n; i++ ){
        ans = ans ^ arr[i];
    }
    for ( int i = 1; i < n; i++ ) {
        ans = ans ^ i;
    }
    printf("Duplicate element is %d\n", ans);
    return;
}

void duplicateelement(int arr[], int n) {
   for (int i = 0; i < n; i++)
   {
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i] == arr[j])
        {
            printf("Duplicate element is %d\n", arr[i]);
            return;
        }
        else{
            printf("No duplicate element found\n");
        }
    }
   }
   
}

int main() {
   
    int arr[] = {6,3,1,5,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    duplicateelement(arr, n);
    duplicate(n, arr);
    return 0;
}