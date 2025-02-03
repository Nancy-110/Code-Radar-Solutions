#include <stdio.h>
int main(){
    int a,b;
    char operator;
    int result;
    scanf("%d %d", &a,&b);
    scanf("%c",&operator);
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
        if(b!=0){
            result = a/b;
            printf("%d",result);
        }else{
            printf("error");
        }
            break;
     default:
        printf("error");
        break;
    }
    return 0;
}