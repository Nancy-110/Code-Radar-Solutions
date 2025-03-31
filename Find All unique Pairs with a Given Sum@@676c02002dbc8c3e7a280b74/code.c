#include <stdio.h>

void Sum(int arr[],int n, int T);
int main(){
    int n,T;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&T);
    Sum(arr,n,T);
    printf("%d %d",i,j);

    return 0;
}
void Sum(int arr[],int n,int T){
    for(int i =0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(i+j == T){
                printf("%d %d",i,j);
            }
        }
    }
    printf("\n");
}