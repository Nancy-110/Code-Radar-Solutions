#include <stdio.h>
void selectionSort(int arr[],int n){
    for(int i =0;i<n;i++){
        int small=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        }
        int temp=arr[small];
        arr[small]=arr[i];
        arr[i]=int temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
printf("\n");
    
}