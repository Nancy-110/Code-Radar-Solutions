#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(char i = 1;i<=N;i++){
        for(char j = 'A'+i;j<=N;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}