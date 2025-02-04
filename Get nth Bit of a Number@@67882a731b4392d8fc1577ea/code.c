#include <stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int nthBit = (num>>n) & 1;
    printf("%d %d",nthBit);
    return 0;
}