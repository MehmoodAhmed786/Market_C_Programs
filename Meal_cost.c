#include <stdio.h>

int main() {
int meal_cost,price,item_ordered,discount=meal_cost*10/100;
printf("Menu:\n1.Fries\n2.Burgers\n3.Soda\n4.Coffee\n");
scanf(" %d",&item_ordered);
if(item_ordered==1)
{

price=1000;
}
else if (item_ordered==2)
{
price=2500;
}
else if(item_ordered==3)
{
price=2300;
}
else if(item_ordered==4)
{
price=900;
}


if (price>1000)

{
meal_cost=price-discount;
}
else 
{
meal_cost=price;
}

printf("Your meal cost is: %d",meal_cost);
    return 0;
}

