#include <stdio.h>
int main(){
    itn costprice ,sellingprice;
    scanf(" %d %d", &costprice, &sellingprice);
    if(costprice > sellingprice){
        printf("Profit");
    }else if(costprice < sellingprice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}