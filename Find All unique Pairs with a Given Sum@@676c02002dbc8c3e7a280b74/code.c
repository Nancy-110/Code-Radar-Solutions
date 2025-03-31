#include <stdio.h>

void Sum(int arr[], int n, int T) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] + arr[j] == T) {
                printf("%d %d\n", arr[i], arr[j]); 
            }
            if(arr[i]==arr[i+1]){
                printf("%d %d\n",arr[i],arr[i+1]);
            }
        }
    }
}

int main() {
    int n, T;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &T);
    Sum(arr, n, T);
    return 0;
}
