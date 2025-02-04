#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int msb = sizeof(int)*8-1;
    if(a&(1<<msb)){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}