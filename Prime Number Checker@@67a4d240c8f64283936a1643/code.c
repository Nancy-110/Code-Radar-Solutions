#include <stdio.h>
int isPrime(num){
    if(num<=0){
     return 0;
    }
    for(int i = 2;i=num/2;i++){
        if(i==0){
            return 1;
        }else{
            return 0;
        }
    }
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