#include <stdio.h>
int main(){
    int  a, b, c;
    scanf(" %d %d %d", &a, &b, &c);
    if(a==b || b == c ||c == a){
        printf("Isosceles");
    }else if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }else(a==b && b==c && c==a){
        printf("Equilateral");
    }
    return 0;
}