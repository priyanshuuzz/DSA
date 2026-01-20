#include<stdio.h>

void uniqueelements(int arr[], int n) {
    int ans =0;
    for (int i = 0; i < n; i++)
    {
     ans = ans^arr[i];
     
    }
    printf("unique element is %d",ans);

}
int main(){
    int arr[] = {2,3,9,5,9,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    uniqueelements(arr, n);
    return 0;
    
}