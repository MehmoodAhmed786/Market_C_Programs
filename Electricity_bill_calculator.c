# include<stdio.h>
int main()
{
int x=250; //previous units
int y=300; //present units
int price_per_unit=5; //RS
int october=y-x;
int total_bill=october*5;
printf("total units consumed in october:%d Units",october);
printf("\nTotal bill of october:%d RS",total_bill);
return 0;
}