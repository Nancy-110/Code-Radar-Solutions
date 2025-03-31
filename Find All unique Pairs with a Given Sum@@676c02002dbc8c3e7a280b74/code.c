#include <stdio.h>
void Sum(int arr[],int n,int T){
    for(int i =0;i<n;i++){
        for(int j = i+1; j<n;j++){
            if(i+j==T){
                printf("%d %d",arr[i],arr[j]);
            }
        }
    }
}