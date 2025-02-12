#include <stdio.h>
void isPrime(num);
if(int t%2==0){
    printf("Prime");
}else{
    printf("not prime");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}