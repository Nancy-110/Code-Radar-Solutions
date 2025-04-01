#include <stdio.h>
void Swap(int arr[],int n){
    for(int i =0;i<n;i++){
       int small= i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[small]){
            small=j;
        }
        
       }

int temp=arr[small];
        arr[small]=arr[i];
        arr[i]=temp;
    }
}