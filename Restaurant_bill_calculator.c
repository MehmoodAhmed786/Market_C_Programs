#include <stdio.h>

int main() {
  float meal_charge,tax_amount,total_bill,tax_percent,tip_percent,tip_amount;
  meal_charge=250;
  tax_percent=4.75;
  tip_percent=10;
  tax_amount=meal_charge*tax_percent/100;
  tip_amount=(meal_charge+tax_amount)*tip_percent/100;
  total_bill=meal_charge+tax_amount+tip_amount;
  printf("\nmeal_cost:%.3f",meal_charge);
  printf("\ntax_amount:%.3f",tax_amount);
  printf("\ntip_amount:%.3f",tip_amount);
  printf("\ntotal_bill:%.3f",total_bill);
    return 0;
}