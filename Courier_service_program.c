#include <stdio.h>
int main(){
    float distance,weight;
    printf("Enter the weight of the package");
    scanf("%f",&weight);
    printf("Enter the distance of shipment");
    scanf("%f",&distance);
    if(weight>0 && distance>=10 && distance<=3000 && weight<20)
    {
        if (weight<2 && weight>0)
       { float total=distance/(5001.10);
        printf("\n Thank you");
        printf("\n Charges are :%.2f",total);
        
    }
else if (weight<=6 && weight>2)
{
    float Total=distance/(500*2.20);
    printf("\n Thank you");
    printf("\n Charges are :%.2f",Total);
    float total3=distance/(500*2.20);
    printf("\n Thank you" );
    printf("\n Charges are :%.2f",total3);
}
    
else if (weight>10 && weight<=20)
{
    float total4=distance/(500*4.480);
    printf("\nThank you");
    printf("\ncharges are :%.2f", total4);
    
}
    
    else if (distance<10 && distance>3000)
    printf("\n We are sorry TCS does not deliver there");
    else if(weight<0 && weight>20)
    printf("weight weight can't be zero, negative or more than 20kg");

return 0;
    }
}