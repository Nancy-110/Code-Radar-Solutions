#include <stdio.h>
void Count(int arr[],int n){
    int fcs[n];
    for(int i = 0; i<n;i++){
        fcs[i]=0;
    }
    for(int i =0;i<n;i++){
        if(fcs[i]==1){
            continue;
        }
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                fcs[j]=1;
                count++;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
}
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
}
Count(arr,n);
    return 0;
}