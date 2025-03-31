#include <stdio.h>
void greater(int arr[],int n,int k){
    arr[k];
    int count =0;
    for(int i =0;i<n;i++){
        if(arr[k]<arr[i]){
            count++;
            printf("%d",count);
        }
    }
}
int main(){
int n,k;
scanf("%d",&n);
scanf("%d",&k);
int arr[n];
for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
}
greater(arr,n,k);
    return 0;
}