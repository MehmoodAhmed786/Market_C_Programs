#include<stdio.h>
float func(float classes_attended,float total_classes);
int main()
{
	float classes_attended;
	 printf("enter classes attended:");
	scanf("%f",&classes_attended);
   float total_classes;
   printf("enter total classes:");
   scanf("%f",&total_classes);
  func(classes_attended,total_classes);
   return 0;
   }
   float func(float classes_attended,float total_classes){
   	float percentage=(total_classes/classes_attended)*100.0;
   	printf("\npercentage:%f",percentage);
   	if((percentage>=80)){
   	printf("\nyou are allowed to sit in the exams");
}
   	else{
   		printf("you are not allowed to sit in the exams");
	   }
}