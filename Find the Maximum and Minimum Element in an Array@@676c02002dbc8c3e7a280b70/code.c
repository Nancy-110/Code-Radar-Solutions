#include <stdio.h>
#include <limits.h>

int main(){
    int max,min,i,n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
   printf("%d ",max);
   printf("%d",min);
    return 0;
}Loading Code...