#include <stdio.h>
#include<math.h>
int main(){
    int a,i,isPrime = 1;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
        return 0;
    }
    for (i = 2; i <=sqrt(a);i++){
        if(a%i==0){
            isPrime = 0;
            break;
        }
    }
     if(isPrime)
     printf("Prime");
     else{
        printf("Not Prime");
     }
    return 0;
}