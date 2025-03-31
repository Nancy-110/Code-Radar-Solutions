#include <stdio.h>

int main(){
    int n,sorted=1;
    scanf("%d",&n);
    int arr[n]
    for(int i = 0; i<n; i++){
        scanf("%d",arr[i]);
    }
    for(int i =1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sorted = 0;
            break;
        }
    }
    if(sorted){
        printf("sorted");
    }else{
        printf("Not sorted");
    }
    rturn 0;
}