#include <stdio.h>
void greater(int arr[],int n,int k){
    int count =0;
    for(int i =0;i<n;i++){
        if(arr[i]>k){
            count++;
           
        }
    }
     printf("%d",count);
}
int main(){
int n,k;
scanf("%d ",&n);
scanf("%d",&k);
int arr[n];
for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
}
greater(arr,n,k);
    return 0;
}