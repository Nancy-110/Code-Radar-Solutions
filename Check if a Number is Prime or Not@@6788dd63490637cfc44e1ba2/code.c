#include <stdio.h>
int main(){
    int a,i;
    scanf("%d", &a);
    if(a<=1){
        printf("Not Prime");
        return 0;
    }
    if(a==2|| a==3){
        printf("Prime");
        return 0;
    }
    if(a%2==0|| a%3==0){
        printf("Not Prime");
        return 0;
    }
    for ( i = 5 ; i*i<=a;i+=6){
        if(a%i==0|| a%(i+2)==0){
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}