#include <stdio.h>
int main(){
    float costPrice ,sellingPrice;
    scanf(" %f",&costPrice);
    scanf(" %f",&sellingPrice);
    if(sellingPrice > costPrice){
        printf("Profit");
    } 
    else if(sellingPrice < costPrice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}