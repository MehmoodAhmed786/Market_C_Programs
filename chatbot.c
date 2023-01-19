#include<stdio.h>
int main()
{
	char ask,issue;
    char question;
    int help,question_2,brand,size,color;
	printf("Do you want to use this chat box :Y/N\n");
	scanf(" %c",&ask);
	
	
	if ( ask=='Y' || ask=='y' )
	
	{
	
	printf("Chatbot: I am your chat bot for shoes.pk\n");
}
	else if (ask=='N' || ask=='n')
	{
		printf("Thank you for using me. \n");
	}


scanf(" %c",&question);



if(question=='H' || question=='h')//|| question=='hello' || question=='Hello')
{

printf("Hi,How can I help you\n");
printf("\n-------------------------\n\n");

printf(" \n1.I need company phone number.\n2.I want to talk here with any vender.\n3.I am having issues buying any shoe. \n");

}
{


scanf(" %d",&help);


if (help==1)
printf("Here is company number.\n '03412345678'\n");
if (help==2)
printf("Your chat will be directed towards any vender in a few minutes.\n");
if (help==3)
printf("we are having issues with the server yet,please wait a while.\n");




}


printf("Do you have any other issue?\n");
scanf(" %c",&issue);
if (issue=='y' || issue=='Y')

{

printf("1.Do you have any issue finding your favourate shoes?\n2.Do you have any issue with finding your size shoes.\n3.Do you have any issues with payment methods?\n");
}
if(issue=='N' || issue=='n')
{
	printf("Ok see you again.");
}
scanf(" %d",&question_2);
if(question_2=1)
{

printf("Which brand do you like?\n\n1.Nike\n2.Jordan\n3.Puma\n4.Brado\n5.Cheeta\n6.Bata\n7.Service\n");
}
scanf(" %d",&brand);

if (brand==1)
{

printf("sorry it's out of stock.");
}
if (brand==2)
{

printf("Select color:\n1.Black\n2.Brown\n");
}
scanf(" %d",&color);
if (color==1)


printf("Select size:\n1.30\n2.32\n3.34\n");

scanf(" %d",&size);
if(size==30)




printf("\nok your order is placed\n");


//else if (size==32 || size==34)
//printf("\nThis size isn't available\n");


	return 0;
	
	
}
