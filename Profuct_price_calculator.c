#include <stdio.h>

int main() {
    float profit,selling_price,product_price,profit_percentage;
    product_price=400.0;
    profit_percentage=20.0;
    profit=product_price*profit_percentage/100; //20% profit.
    selling_price=profit+product_price;
    printf("original_price:%.2f",product_price);
    printf("\nselling_price:%.2f",selling_price);
    return 0;
}