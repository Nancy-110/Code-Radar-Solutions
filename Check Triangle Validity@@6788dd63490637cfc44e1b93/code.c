#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b || b==c || a==c){
        printf("Invalid");
    }else {
        printf("Valid");
    }
    return 0;
}