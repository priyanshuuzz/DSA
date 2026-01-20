#include<stdio.h>
int main(){
    int sum = 0;
    int arr[] ={1,2,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
 printf("sum of array %d", sum);
 return 0;
}