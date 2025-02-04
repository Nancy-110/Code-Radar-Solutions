#include <stdio.h>
void dtob(int n){
    if(n>1){
        detob(n/2);
    }
    printf("%d",n%2);
}
int main(){
    int num;
    scanf("%d",&num);
    dtob(num);
    return 0;
}