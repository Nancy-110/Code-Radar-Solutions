#include <stdio.h>
int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    int nbit=(n>>a)&1;
    printf("%d",n,a,nbit);
    return 0;
}