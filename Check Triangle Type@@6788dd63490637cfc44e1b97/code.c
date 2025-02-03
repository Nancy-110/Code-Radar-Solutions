#include <stdio.h>
int main(){
    float a, b, c;
    scanf(" %f %f %f", &a,&b,&c);
    if(a==b || b == c ||c == a){
        printf("Isosceles");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }else(a==b && b==c && c==a){
        printf("Equilateral");
    }
    return 0;
}