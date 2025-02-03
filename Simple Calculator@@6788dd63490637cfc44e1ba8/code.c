#include <stdio.h>
int main(){
    int a,b;
    char operator;
    int result;
    scanf("%d %d", &a,&b);
    switch(operator){
        case '+':
        result = a+b;
        printf("%d",result);
        break;
        case '-':
        result = a-b;
        printf("%d",result);
        break;
        case'*':
        result = a*b;
        printf("%d",result);
        break;
        case '/':
        result = a/b;
        printf("%d",result);
        break;
        default:
        printf("error");
    }
    return 0;
}