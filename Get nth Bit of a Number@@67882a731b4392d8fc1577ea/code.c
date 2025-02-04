#include <stdio.h>
int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    int nbit=(a>>n)&1;
    printf("%d",n,a,nbit);
    return 0;
}