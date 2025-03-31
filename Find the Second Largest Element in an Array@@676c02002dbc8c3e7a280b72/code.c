#include <stdio.h>
#include<limits.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i =0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    if(n<2){
        printf("-1\n");

    }else if(smax==arr[0])[
        printf("-1\n");
    ]
    else{
    printf("%d",smax);
    }
    return 0;
}