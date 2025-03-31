#include <stdio.h>
void find(int arr[], int n);
if(n<2){
    printf("-1\n");
    return;
}
int max=arr[0];
int smax=-1;
for(int i =1;i<n;i++){
    if(arr[i]>max){
        smax=max;
        max=arr[i];
    }else if(arr[i]>smax && arr[i]!=max){
        smax=arr[i];
    } 
    

if(smax==-1){
    printf("-1\n");
}else{
    printf("%d",smax);
}
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    find(arr,n);
    return 0;
}