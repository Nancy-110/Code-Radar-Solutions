#include <stdio.h>
int main(){
    char a,b;
    scanf("c %c",&a ,&b);
    if(a == '+' && b=='-'){
        printf("Same Sign");
    }else if(a=='-' && b=='-'){
        printf("Same Sign");
    }else{
        printf("Different Sign");
    }
    return 0;
}