#include <stdio.h>
#include<limits.h>


int main(){
    int max=arr[0];
    int smax=arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i =0;i<n;i++)[
        if(arr[i]!=max && smax<arr[i]){
            printf("%d",smax);
        }
    ]
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return 0;
}