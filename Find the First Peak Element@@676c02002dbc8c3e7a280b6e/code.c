#include <stdio.h>
int firstPeak(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int firstPeak = findFirstPeak(arr, n);
    
    if (firstPeak != -1) {
        printf(" %d\n",firstPeak);
    } else {
        printf("No peak element found in the array.\n");
    }
    
    return 0;
}
int firstPeak(int arr[],int n){
    if(n==1){
        return 0;
    }
    if(arr[0]>=arr[1]){
        return 0;
    }
    for(int i =1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return i;
        }
    }
    if(arr[n-1]>arr[n-2]){
        return n-2;
    }
    return -1;
}