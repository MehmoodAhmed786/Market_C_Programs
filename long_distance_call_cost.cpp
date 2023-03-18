#include <stdio.h>

int main() {
    int start_hr, start_min, end_hr, end_min, duration_min;
    float call_rate = 0.12;

   
    printf("Enter the starting time of the call (h:m): ");
    scanf(" %d%d", &start_hr,&start_min);

    
    printf("Enter the ending time of the call (h:m): ");
    scanf(" %d%d", &end_hr, &end_min);

   
    duration_min = (end_hr - start_hr) * 60 + (end_min - start_min);

    float cost = duration_min * call_rate;

    printf("The cost of the call is $%.2f\n", cost);

    return 0;
}
