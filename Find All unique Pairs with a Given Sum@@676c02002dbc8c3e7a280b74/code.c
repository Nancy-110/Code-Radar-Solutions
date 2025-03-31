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

    return 0;
}
void Sum(int arr[], int n, int T) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == T) {
                // Print the pair only if it's not a duplicate
                int isDuplicate = 0;

                for (int k = 0; k < i; k++) {
                    if ((arr[k] == arr[i] && arr[k + 1] == arr[j]) ||
                        (arr[k] == arr[j] && arr[k + 1] == arr[i])) {
                        isDuplicate = - (Parial Failuer