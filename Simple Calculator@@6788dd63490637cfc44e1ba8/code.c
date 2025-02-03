#include <stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %d", &a, &b);
    scanf(" %c", &operator);
    if(operator == '+'){
       printf("%d",a+b);
    }else if(operator == '-'){
        printf("%d",a-b);
    }else if(operator == '*'){
        printf("%d",a*b);
    }else if(operator == '/'){
        if(b!=0){
            printf("%d",a/b);
        }else{
            printf("error");
        }
    }else{
        printf("error");
    }
    return  0;
}