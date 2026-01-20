#include<stdio.h>
maximaarray(int max, int arr[],int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        }
        return max;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int max = arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    int maximum = maximaarray(max, arr, n);
    printf("maximum number of array %d",&maximum);

    return 0;
}