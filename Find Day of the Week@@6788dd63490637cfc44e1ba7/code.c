#include <stdio.h>
int main(){
    int a;
    char day;
    scanf("%d",&a);
    switch(day){
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
    printf("Invalid");
    break;
    }  
    return 0;
}