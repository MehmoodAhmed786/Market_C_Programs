#include <stdio.h>

int main() {
 char order_burger,add_on;
  int burger=500;
  int fries=300;
  int Total_bill;
 printf("Do you want a burger Y/N\n ");
 scanf("%c" ,&order_burger);
 if (order_burger=='Y' || order_burger=='y')
 {
     printf("\n burger added");
     printf("\ndo you want to add cold drint and fries? For just 200Rs Y/N\n");
     scanf(" %c ",&add_on);
     if(add_on=='Y' || add_on=='y');
     printf("\n Thank you");
    
     Total_bill=burger+fries;
     printf("\nYour total bill is: %d",Total_bill);
 }  
     else if(add_on=='N' || add_on=='n')
 {  
     printf("\n OK...Your choice ");
     printf("\nYour bill is: %d\n",burger);
     
 }
 else printf("Invalid value");
     
 
 
 
    return 0;
}