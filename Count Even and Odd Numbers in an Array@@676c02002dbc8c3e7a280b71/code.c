#include <stdio.h>

void EvenOdd(int arr[],int n,int even=0,int odd=0){
for(int i = 0; i < n;i++){
    if(int i % 2 == 0){
        even++;
        printf("%d ",even);
    }
}for(int j = i+1;j<n;j++){
    if(j % 2!==0){
        odd++;
        printf("%d",odd);
    }
}
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    EvenOdd(arr,n,even,odd);
    return 0;

}