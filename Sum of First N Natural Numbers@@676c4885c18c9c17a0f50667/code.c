#include <stdio.h>
int mai(){
    int N;
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        int sum = 0;
        sum+=i;
        printf("%d",sum);
    }
    return 0;
}