#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=90){
        printf("A");
    }else if(ch>=80 &&  ch <= 90){
        printf("B");
    }else if(ch>=70 && ch<=80){
        printf("C");
    }else if(ch>=60 || ch<=70){
        printf("D");
    }else(ch<=60){
        printf("F");
    }
    return 0;
}