#include <stdio.h>

void EvenOdd(int arr[],int n,int *even,int *odd){
    *even =0;
    *odd=0;
for(int i = 0; i < n;i++){
    if(arr[i] % 2 == 0){
       (*even)++;
        printf("%d ",even);
    }else{
        (*odd)++;
    }
}
}

int main(){
    int n,even,odd;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    EvenOdd(arr,n,&even,&odd);
    printf("%d %d",even,odd);
    return 0;

}